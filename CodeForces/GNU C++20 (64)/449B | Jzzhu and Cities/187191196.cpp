<algorithm>
<cmath>
<deque>
<functional>
<iomanip>
<iostream>
<map>
<numeric>
<queue>
<set>
<stack>
<string>
<unordered_set>
<utility>
<valarray>
<vector>

namespace std;
 inf unsigned long long32_MAX
FIn                                                                    \
0);                                                                  \
(0);                                                                 \
::sync_with_stdio(false);

 endl '\n'
 PII   pair<logn long,unsigned long long>
 PPII  pair<unsigned long long,pair<unsigned long long,unsigned long long>>
priority_queue<PPII,vector<PPII>,greater<PPII>> pq;
pair<unsigned long long,pair<unsigned long long,unsigned long long>>> Adj[100001];
100001]={};
long long dis[100001]={};
long long n,m,k;
long long rslt=0;

 dijkstra(){
pq.empty()){
 f = pq.top();
unsigned long long type,to;
.second.first;
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
  for(unsigned long long i=1;i<=n;i++) dis[i]=ULONG_LONG_MAX;
  for(unsigned long long i=0;i<m;i++){
    unsigned long long u,v,x;
    cin >> u >> v >>x;
    Adj[u].push_back({0,{v,x}});
    Adj[v].push_back({0,{u,x}});
  }
  for(unsigned long long i=0;i<k;i++){
    unsigned long long u,x;
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