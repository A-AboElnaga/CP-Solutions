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
int n, m;
set<pair<int,int>> Adj[200005];
bool vis[2][200005]={{0}};
int  stat[2][200005]={{0}};
queue<pair<int,int>> q;
bool Ncontra =1;
 
int bfs(int i){
    int loc=0;
    Ncontra=1;
    while(!q.empty() && Ncontra){
      int node = q.front().first;
      int impos = q.front().second;
      q.pop();
      if(vis[i][node]) continue;
      vis[i][node]= 1;
      if(impos==1) loc+=1;
      for(auto el:Adj[node]){
        
        if(stat[i][el.first]==-1){
            if(impos==1){
              stat[i][el.first]=1-el.second;
            }
            else{
              stat[i][el.first]=el.second;
            }
        }
        else{
          if(impos==1){
            if(stat[i][el.first]!=1-el.second){
              Ncontra=0;
              break;
            }
          }
          else if(stat[i][el.first]!=el.second){
              Ncontra=0;
              break;
          }
        }
      if(!vis[i][el.first]){
        q.push({el.first,stat[i][el.first]});
      }
      }
    }
    while(!q.empty())q.pop();
    if(!Ncontra)loc=0;
    return loc;
}
 
int main() {
  FIn;
  // freopen ("out.txt", "w", stdout);
  // freopen ("in.txt", "r", stdin);
  int t; cin>> t;
  while(t--){
    int rslt=0;
    cin >> n >> m;
    for(int i=1;i<=n;i++){
      vis[0][i]=0;
      vis[1][i]=0;
 
      stat[0][i]=-1;
      stat[1][i]=-1;
      
      Adj[i].clear();
 
    }
    for(int i=1;i<=m;i++){
      int a,b; string c;
      cin >> a >> b >> c ;
      if(c[0]=='i')
        { 
          Adj[a].insert({b,1});
          Adj[b].insert({a,1});
        }
      else{
          Adj[a].insert({b,0});
          Adj[b].insert({a,0});
      }
    }
    for(int i=1;i<=n && Ncontra;i++){
      int loc = 0;
      if(!vis[0][i]){
          stat[0][i]=1;
          q.push({i,stat[0][i]});
          loc = bfs(0);
          if(!Ncontra) break;
          stat[1][i]=0;
          q.push({i,stat[1][i]});
          loc = max(loc,bfs(1));
      }
      rslt +=loc;
    }
    if(!Ncontra) cout << -1 << endl;
    else 
     cout << rslt << endl;
    Ncontra=1;
  }
 
}