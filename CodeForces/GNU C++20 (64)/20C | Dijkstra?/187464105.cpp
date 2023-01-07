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
#define inf unsigned long long32_MAX
#define FIn                                                                    \
  cin.tie(0);                                                                  \
  cout.tie(0);                                                                 \
  ios_base::sync_with_stdio(false);
#define endl '\n'
#define PII pair<long long,int>
int n,m;
bool vis[100001]={0};
long long cost[100001]={0};
vector<pair<int,long long>> Adj[100001]; 
priority_queue<PII,vector<PII>,greater<PII>> pq;
 
void dijkstra(){
  while(!pq.empty())
  {  
    long long val = pq.top().first;
    int node = pq.top().second;
    pq.pop();
    if(vis[node]) continue;
    vis[node]=1;
    for(auto el:Adj[node]){
      if(!vis[el.first] && val + el.second<cost[el.first]){
          cost[el.first]= val+ el.second;
          pq.push({cost[el.first],el.first});
      }
    }
  }
}
 
 
int main() {
  FIn;
  //freopen ("out.txt", "w", stdout);
  //freopen ("in.txt", "r", stdin);
  cin >> n >> m;
  for(int i=1;i<=n;i++)   cost[i]=(long long)1e12 +1;
  for(int i =1; i<=m;i++){
      int from,to; long long cost;
      cin >> from >> to >> cost;
      Adj[from].push_back({to,cost});
      Adj[to].push_back({from,cost});
    }
  cost[1]=0;
  pq.push({0,1});
  dijkstra();
  if(vis[n]!=1) cout << -1 << endl;
  else{
    long long total=cost[n];
    int cur =n;
    stack<int> stk; stk.push(n);
    while(total>0){
      for(auto el:Adj[cur]){
        if(total-el.second==cost[el.first]){
          total -=el.second;
          cur=el.first;
          stk.push(cur);
          break;
        }
      }
    }
    while(!stk.empty()){
      cout << stk.top() << ' ';
      stk.pop();
    }
  }
 
return 0;
}