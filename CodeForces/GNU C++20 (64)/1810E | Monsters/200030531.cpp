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
#include <bitset>
#include <bits/stdc++.h>
using namespace std;
 
#define file                       \
  freopen("out.txt", "w", stdout); \
  freopen("in.txt", "r", stdin)
 
#define FIn    \
  cin.tie(0);  \
  cout.tie(0); \
  ios_base::sync_with_stdio(false)
#define endl '\n'
 
int t;
int n,m;
int arr[200005];
set<int> adj[200005];
int vis[200005];
int u,v,mx;
vector<int> start;
bool vis_zeros[200005];
priority_queue<pair<int/*monster*/,int/*index*/>> pq;
int counter=0,start_counter;
bool rslt;
 
bool scan(){
  int top;
  counter=0;
  bool inc;
  while(!pq.empty()){
    top=pq.top().second;
    if(arr[top]==0){
      vis_zeros[top]=1;
    }
    if(arr[top]>counter){
      return false;
    }
    else{
      counter+=1;
      if(counter>=mx){
        return true;
      }
    }
    vis[top]=start_counter;
    pq.pop();
    for(auto el:adj[top]){
      if(vis[el]==start_counter){
        continue;
      }
      vis[el]=start_counter;
      pq.push({-arr[el],el});
    }
  }
  if(counter<n){
    return false;
  }
  return true;
}
 
bool one_comp(int i){
  vis[i]=-1;
  counter+=1;
  for(auto el:adj[i]){
    if(vis[el]==-1) continue;
    one_comp(el);
  }
  if(counter==n){
    return true;
  }
  return false;
}
 
 
 
 
void bfs(){
  counter=0;
  start_counter=0;
  for(auto el:start){
    if(vis_zeros[el]==1){
      continue;
    }
    vis_zeros[el]=1;
    counter=0;
    pq.push({0,el});
    rslt =scan();
    while(!pq.empty()){
      pq.pop();
    }
    if(rslt){
      cout << "Yes" << endl;
      return;
    }
    start_counter+=1;
  }
  cout << "No" << endl;
}
 
void solve()
{
  cin >> n >> m;
  start.clear();
  mx=0;
  for(int i=1;i<=n;i++){
    adj[i].clear();
    cin >> arr[i];
    mx=max(mx,arr[i]);
    vis[i]=-2;
    if(arr[i]==0){
      start.push_back(i);
      vis_zeros[i]=0;
    }
  }
  for(int i=0;i<m;i++){
    cin >> u >> v;
    adj[u].insert(v);
    adj[v].insert(u);
  }
  counter=0;
  if(!one_comp(1)){
    cout << "No" << endl;
    return;
  }
  bfs();
  
}
 
int main()
{
  FIn;
  // file;
  // t = 1;
  cin >> t;
  while (t--)
  { 
    solve();
  }
}