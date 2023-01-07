#include <algorithm>
#include <cmath>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_set>
#include <utility>
#include <valarray>
#include <vector>
 
using namespace std;
#define inf INT32_MAX
#define FIn                                                                    \
  cin.tie(0);                                                                  \
  cout.tie(0);                                                                 \
  ios_base::sync_with_stdio(false);
 
#define endl '\n'
#define PII pair<int /*cost*/, int /*source*/>
 
vector<pair<int, int /*cost*/>> Adj[100001]={};
int /*cost*/ rslt[100001];
bool vis[100001]={0};
priority_queue<PII, vector<PII>, greater<PII>> pq;
vector<int> busy[100001]={};
int n, m;
 
void dijkstra(){
 
  while(!pq.empty() && vis[n]==0){
    int c=pq.top().first;
    int s=pq.top().second;
    pq.pop();
    if(s==n) return;
    auto it = lower_bound(busy[s].begin(),busy[s].end(),c);
    if(it!=busy[s].end() && *it==c)
      {
        while(it!=busy[s].end() && *it==c){c+=1; it++;}
        pq.push({c,s});
      }
    else{
      vis[s]=1;
      for(auto el:Adj[s]){
        int dis,tc; dis=el.first;tc=el.second;
        if(vis[dis]) continue;
        else if(c+tc < rslt[dis]){
        rslt[dis] =c+tc;
        pq.push({rslt[dis],dis});
        }
      }
    }
  }
}
 
 
int main() {
  FIn;
  // freopen ("out.txt", "w", stdout);
  // freopen ("in.txt", "r", stdin);
  cin >> n >> m;
  // init
  for(int i=1;i<=n;i++) rslt[i]=inf;
  //build Adj
  for (int i = 0; i < m; i++) {
    int s, d, c;
    cin >> s >> d >> c;
    Adj[s].push_back({d, c});
    Adj[d].push_back({s, c});
  }
  //travel conflict
  for (int i = 1; i <= n; i++) {
    int cnt;
    cin >> cnt;
    for (int j=0; j<cnt;j++){
      int x; cin >> x;
      busy[i].push_back(x);
    }
  }
  rslt[1]=0;
  pq.push({0,1});
  dijkstra();
  if(rslt[n]==inf) cout << -1;
  else cout << rslt[n];
 
  return 0;
}