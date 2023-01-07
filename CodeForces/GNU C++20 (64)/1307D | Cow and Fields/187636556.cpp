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
#include <sstream>
 
using namespace std;
#define inf unsigned long long32_MAX
#define FIn                                                                    \
  cin.tie(0);                                                                  \
  cout.tie(0);                                                                 \
  ios_base::sync_with_stdio(false);
#define endl '\n'
#define PII   pair<long long,pair<int,int>>
#define MAX   200005
 
int n,m,k;
bool visS[MAX]={0};
bool visD[MAX]={0};
int costS[MAX];
int costD[MAX];
vector<int> adj[MAX];
queue<int> q;
 
void bfsS(){
    while(!q.empty()){
      int node = q.front();
      int c = costS[node];
      q.pop();
      if(visS[node]) continue;
      visS[node]=1;
      for(auto el:adj[node]){
        if(!visS[el] && c+1<costS[el]){
          costS[el]=c+1;
          q.push(el);
        }
      }
    }
}
void bfsD(){
    while(!q.empty()){
      int node = q.front();
      int c = costD[node];
      q.pop();
      if(visD[node]) continue;
      visD[node]=1;
      for(auto el:adj[node]){
        if(!visD[el] && c+1<costD[el]){
          costD[el]=c+1;
          q.push(el);
        }
      }
    }
}
 
int main() {
  FIn;
  // freopen ("out.txt", "w", stdout);
  // freopen ("in.txt", "r", stdin);
  cin >> n >> m >> k;
  for(int i=1;i<=n;i++){
    costS[i]=MAX;
    costD[i]=MAX;
  }
  int spec[k]; 
  for(int i=0;i<k;i++){
    cin >> spec[i];
  }
  for(int i=0;i<m;i++){
    int from, to; cin >> from >> to;
    adj[from].push_back(to);
    adj[to].push_back(from);
  }
  costS[1]=0;
  q.push(1);
  bfsS();
  q.push(n);
  costD[n]=0;
  bfsD();
 
  vector<pair<int,int>> x_y;
  vector<pair<int,int>> y;
  for(auto el:spec){
    x_y.push_back({costS[el]-costD[el],el});
    y.push_back({costD[el],el});
  }
  sort(x_y.begin(),x_y.end());
  int best =0; int mx = -MAX;
  for(auto it :x_y){
    int a = it.second;
    best = max(best,mx+costD[a]);
    mx = max(mx,costS[a]);
  }
  cout << min(best+1,costS[n]);
 
  return 0;
}