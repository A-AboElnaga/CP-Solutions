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
#define inf unsigned long long32_MAX
#define FIn                                                                    \
  cin.tie(0);                                                                  \
  cout.tie(0);                                                                 \
  ios_base::sync_with_stdio(false);
#define endl '\n'
#define PII pair<pair<pair<int/*time*/,int/*dis*/>,char/*dirc*/>,pair<int,int>>
int n,m,k;
int sx,sy,tx,ty;
int dx[4]={0,0,-1,1}; int dy[4]={1,-1,0,0};
char where[4]={'e','w','s','n'};
 
bool vis[1001][1001]={{0}};
bool block[1001][1001]={{0}};
int gtime[1001][1001]={{0}};
priority_queue<PII,vector<PII>,greater<PII>> pq;
 
void dijkstra(){
  int cost,dis,x,y; char dirc;
  while(!pq.empty() && vis[tx][ty]==0)
  {
    cost = pq.top().first.first.first;
    dis =pq.top().first.first.second;
    dirc= pq.top().first.second;
    x=pq.top().second.first; y=pq.top().second.second;
    pq.pop();
    if(vis[x][y]) continue;
    vis[x][y]=1;
    for(int i=0;i<4;i++){
      if(x+dx[i] > 0 && x+dx[i] <=n &&
         y+dy[i] > 0 && y+dy[i] <=m &&
         !block[x+dx[i]][y+dy[i]]
         ){
            if(dirc==where[i] && dis <k && cost<=gtime[x+dx[i]][y+dy[i]]){
                gtime[x+dx[i]][y+dy[i]]= cost;
                pq.push({{{gtime[x+dx[i]][y+dy[i]],dis+1},where[i]},{x+dx[i],y+dy[i]}});
            }
            else{
              if(cost+1<=gtime[x+dx[i]][y+dy[i]]){
                gtime[x+dx[i]][y+dy[i]]= cost+1;
                pq.push({{{gtime[x+dx[i]][y+dy[i]],1},where[i]},{x+dx[i],y+dy[i]}});
              }
            }
         }
    }
  }
 
}
 
 
int main() {
  FIn;
  // freopen ("out.txt", "w", stdout);
  // freopen ("in.txt", "r", stdin);
  cin >> n >> m >> k;
  for(int i =1; i<=n;i++){
    for(int j=1;j<=m;j++){
      char x; cin >> x;
      if(x!='.')block[i][j]=1;
      gtime[i][j]=100000000;
    }
  }
  cin >> sx >> sy >> tx >> ty;
  gtime[sx][sy] =0;
  pq.push({{{0,0},'z'},{sx,sy}});
  dijkstra();
  if(vis[tx][ty])
  cout << gtime[tx][ty];
  else{
    cout << -1 << endl;
  }
  
  return 0;
}