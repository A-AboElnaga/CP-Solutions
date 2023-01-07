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
#define inf long long32_MAX
#define FIn                                                                    \
  cin.tie(0);                                                                  \
  cout.tie(0);                                                                 \
  ios_base::sync_with_stdio(false);
 
#define endl '\n'
#define PII   pair<logn long,long long>
#define PPII  pair<long long,pair<long long,long long>>
priority_queue<PPII,vector<PPII>,greater<PPII>> pq;
vector<pair<long long,pair<long long,long long>>> Adj[100001];
bool vis[100001]={};
long long dis[100001]={};
long long n,m,k;
long long rslt=0;
 
void dijkstra(){
  while(!pq.empty()){
    auto f = pq.top();
    long long type,to;
    type=f.second.first;
    to= f.second.second;
    pq.pop();
    if(vis[to]){
      continue;
    }
    if(type) rslt-=1;
    vis[to]=1;
    for(auto el:Adj[to]){
      if(!vis[el.second.first] && dis[el.second.first]>=dis[to]+el.second.second)
      {
        dis[el.second.first] = dis[to] + el.second.second;
        pq.push({dis[el.second.first],{el.first,el.second.first}});
      }
    }
    
  }
 
}
 
int main() {
  FIn;
  // freopen ("out.txt", "w", stdout);
  // freopen ("in.txt", "r", stdin);
  cin >> n >> m >> k;
  for(long long i=1;i<=n;i++) dis[i]=LONG_LONG_MAX;
  for(long long i=0;i<m;i++){
    long long u,v,x;
    cin >> u >> v >>x;
    Adj[u].push_back({0,{v,x}});
    Adj[v].push_back({0,{u,x}});
  }
  for(long long i=0;i<k;i++){
    long long u,x;
    cin >> u >>x;
    Adj[1].push_back({1,{u,x}});
    Adj[u].push_back({1,{1,x}});
  }
  pq.push({0,{0,1}});
  rslt =k;
  dijkstra();
  cout << rslt;
  return 0;
}