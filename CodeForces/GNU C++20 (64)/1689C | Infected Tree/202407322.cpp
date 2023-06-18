#include <algorithm>
#include <bits/stdc++.h>
#include <bitset>
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
 
#define file                                                                   \
  freopen("out.txt", "w", stdout);                                             \
  freopen("in.txt", "r", stdin)
 
#define FIn                                                                    \
  cin.tie(0);                                                                  \
  cout.tie(0);                                                                 \
  ios_base::sync_with_stdio(false)
 
#define endl '\n'
 
int t,n;
vector<int> adj[300005];
int parent[300005];
int parentOf[300005];
bool vis[300005];
int u,v;
int rslt;
int solved[300005];
vector<int> arr;
 
 
int dfs(int i){
  vis[i]=1;
  bool leaf=1;
  int loc_rs=0;
  for(auto el:adj[i]){
    if(vis[el])continue;
    parent[el]=i;
    loc_rs+=dfs(el)+1;
  }
  parentOf[i]=loc_rs;
 
  return loc_rs;
}
 
int go(int i){
  vis[i]=1;
  int loc_rs=0;
  for(auto el:adj[i]){
    if(vis[el])continue;
    if(solved[el]==-1){
      solved[el]=go(el);
    }
  }
  arr.clear();
  for(auto el:adj[i]){
    if(parent[i]==el)continue;
    arr.push_back(el);
  }
  if(arr.size()==0)loc_rs=0;
  else if(arr.size()==1)loc_rs=parentOf[arr[0]];
  else loc_rs=max({solved[arr[0]]+parentOf[arr[1]],solved[arr[1]]+parentOf[arr[0]]});
  return loc_rs;
}
 
 
void solve(){
  cin >> n;
  for(int i=0;i<=n;i++){
    adj[i].clear();
    parent[i]=i;
    parentOf[i]=0;
    vis[i]=0;
    solved[i]=-1;
  }
  
  for(int i=0;i<n-1;i++){
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
 
  parentOf[1]=dfs(1); // get parents and leaves;
  for(int i=0;i<=n;i++){
    vis[i]=0;
  }
 
  rslt=go(1);
 
  cout << rslt << endl;
}
 
 
int main() {
  FIn;
  // file;
  // t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
}