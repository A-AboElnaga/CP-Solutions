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
<sstream>
<bitset>
bits/stdc++.h>
namespace std;

 file                       \
"out.txt", "w", stdout); \
"in.txt", "r", stdin)
 inf unsigned long long32_MAX
FIn    \
0);  \
(0); \
::sync_with_stdio(false)
 endl '\n'



int u,v;
<int> adj[200005];
200005];
<int,int>> q;


void mbfs(){
  int node,foe;
  while(!q.empty()){
    node = q.front().first; foe=q.front().second; q.pop();
    vis[node]=foe;
    for(auto el:adj[node]){
      if(vis[el]==0){
        vis[el]=foe;
        q.push({el,foe});
      }   
    }
  }
}
 
void print(){
  for(int i=2;i<=n;i++){
      if(vis[i]==1 && adj[i].size()==1){
        cout << "Yes" << endl;
        return ;
      }
    }
  cout << "No" << endl;
  return;
}
 
int main()
{
  FIn;
  // file;
  cin >> t;
  while(t--){
    cin >> n >> k;
    for(int i=1;i<=n;i++){
      adj[i].clear();
      vis[i]=0;
    }
    for(int i=1;i<=k;i++){
      cin >> u;
      vis[u]=1;
      q.push({u,-1});
    }
    for(int i=1;i<n;i++){
      cin >> u >> v;
      adj[u].push_back(v);
      adj[v].push_back(u);
    }
    q.push({1,1});
    mbfs();
    print();
    
  }
  return 0;
}