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
 
int n,m;
vector<int> Adj[101];
map<int,int> coloring;
bool vis[101]={};
queue<pair<int,int>> q;
void bfs(){
  while(!q.empty()){
    int node = q.front().first;
    int color = q.front().second;
    q.pop();
    if(vis[node]) continue;
    vis[node]=1;
    for(auto el:Adj[node]){
      if(!vis[el]){
        if(color ==-1){
          coloring[el]=1;
        }
        else if(coloring[el] == color){
          coloring[el]=-1;
        }
        else{
          coloring[el] = 1- color;
        }
          q.push({el,coloring[el]});
      }
    }
  }
}
 
int main() {
  FIn;
  // freopen ("out.txt", "w", stdout);
  // freopen ("in.txt", "r", stdin);
  cin >> n >> m;
  for(int i=0;i<m;i++){
    int a,b; cin >> a>> b;
    Adj[a].push_back(b);
    Adj[b].push_back(a);
  }   
  for(int i=1;i<=n;i++){
    coloring[i]=2;
  }
  for(int i =1;i<=n ;i++){
    if(!vis[i]){
      coloring[i]=1;
      q.push({i,1});
      bfs();
    }
  }
  int rslt =0;
  for(int i=1;i<=n;i++){
    if(coloring[i]==-1) rslt+=1;
  }
  if((n-rslt)%2!=0) rslt+=1;
  cout << rslt;
  return 0;
}