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

vector<int> adj[200005];
200005];
;
<int>  rslt[200005];



 stk;
int node;
 
void dfs(){
  int st;
  while(!stk.empty()){
    st = stk.top(); stk.pop();
    if(vis[st])continue;
    rslt[rsltsz].push_back(st);
    vis[st]=1;
    if(adj[st].empty()) rsltsz+=1;
    while(!adj[st].empty()){
        if(!vis[*adj[st].rbegin()])
          stk.push(*adj[st].rbegin());
        adj[st].pop_back();
    }
  }
}
 
 
int main()
{
  FIn;
  // file;
  cin >> t;
  while(t--){
    cin >> n;
    rsltsz=0;
    rslt[0].clear();
    for(int i=1;i<=n;i++){
      adj[i].clear();
      vis[i]=0;
      rslt[i].clear();
    }
    for(int i=1;i<=n;i++){
      cin >> x;
      if(i==x) start=x;
      adj[x].push_back(i);
 
    }
    stk.push(start);
    dfs(); 
    if(rsltsz==0)rsltsz+=1;
    cout << rsltsz << endl;
    for(int i=0;i<rsltsz;i++){
      cout << rslt[i].size() << endl;
      for(auto el:rslt[i]) cout << el << ' ';
      cout <<endl;
    }cout << endl;
  }
 
  return 0;
}