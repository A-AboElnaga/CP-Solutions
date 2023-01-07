#include <iostream>
#include <string>
#include <iomanip>
#include <numeric>
#include <cmath>
#include <vector>
#include <algorithm>
#include <set>
#include <valarray>
#include <queue>
#include <unordered_set>
#include <map>
#include <stack>
#include <deque>
#include <utility>
 
using namespace std;
 
#define FIn   cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false);
#define endl '\n'
 
void bfs(queue<pair<int/*node*/,int/*from*/>> &q,
         vector<pair<int/*to*/,int/*bridge ID*/>> *Adj,
         bool *vis, bool *rslt
         ){
        
    while(!q.empty()){
      int f = q.front().first;
      int from = q.front().second;
      q.pop();
      if(vis[f]) continue;
      vis[f]=1;
      for(auto el:Adj[f]){
          if(el.first!=from){
              if(vis[el.first])rslt[el.second]=1;
              else q.push({el.first,f});
          }
      }
 
    }
}
 
int main()
{
  FIn;
  int n,k,d; cin >> n >> k >> d;
  queue<pair<int/*node*/,int/*police station ID*/>> q;
  for(int i=0;i<k;i++){
    int x; cin >>x;
    q.push(make_pair(x,0));
  }
  bool vis[n+1]={};
  bool rslt[n+1]={};
  vector<pair<int/*to*/,int/*bridge ID*/>> way[n+1];
  for(int i=1;i<n;i++){
    int u,v; cin >> u >> v;
    way[u].push_back(make_pair(v,i));
    way[v].push_back(make_pair(u,i));
  }
  bfs(q,way,vis,rslt);
 
  int rsltc=0;
  for(int i=1;i<=n;i++){
    if(rslt[i])rsltc+=1;
  }
  cout << rsltc << endl;
  for(int i=1;i<=n;i++){
    if(rslt[i])cout << i<< ' ';
  }
  return 0;
}