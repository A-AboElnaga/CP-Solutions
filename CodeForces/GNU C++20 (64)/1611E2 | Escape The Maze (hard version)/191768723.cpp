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
int> vis[200005];
<int,int>> q;
 st;

 
void mbfs(){
  int node,foe,id;
  while(!q.empty()){
    node = q.front().first; foe=q.front().second; q.pop();
    id = vis[node].second;
    for(auto el:adj[node]){
      if(vis[el].first==0){
        vis[el].first=foe;
        vis[el].second=id;
        q.push({el,foe});
      }
      else if(vis[el].first==-1 && foe==1){
        st.insert(vis[el].second);
      }
    }
  }
  rslt =(int)st.size();
}
 
void print(){
  for(int i=2;i<=n;i++){
      if(vis[i].first==1 && adj[i].size()==1){
        cout << -1 << endl;
        return ;
      }
    }
  cout << rslt << endl;
  return;
}
 
int main()
{
  FIn;
  // file;
  cin >> t;
  while(t--){
    cin >> n >> k;
    rslt =k;
    st.clear();
    for(int i=1;i<=n;i++){
      adj[i].clear();
      vis[i]={0,0};
    }
    for(int i=1;i<=k;i++){
      cin >> u;
      vis[u]={-1,u};
      q.push({u,-1});
    }
    for(int i=1;i<n;i++){
      cin >> u >> v;
      adj[u].push_back(v);
      adj[v].push_back(u);
    }
    vis[1]={1,1};
    q.push({1,1});
    mbfs();
    print();
    
  }
  return 0;
}