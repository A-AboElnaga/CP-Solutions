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
bool vis[501][501]={{0}};
int n,m;
int sx,sy;
int ex,ey;
int dx[4] = {0,0,1,-1};
int dy[4]= {-1,1,0,0};
 
void traverse(int x,int y){
    if(vis[ex][ey]) return;
    if(vis[x][y]) return;
    else{
      vis[x][y]=1;
      for(int i=0;i<4;i++){
        if(x+dx[i]>0 && x+dx[i]<=n && y+dy[i]>0 && y+dy[i]<=m && !vis[x+dx[i]][y+dy[i]]){
          traverse(x+dx[i],y+dy[i]);
        }
      }
    }
 
}
int check(){
  int c =0;
  for(int i=0;i<4;i++){
        if(ex+dx[i]>0 && ex+dx[i]<=n && ey+dy[i]>0 && ey+dy[i]<=m && !vis[ex+dx[i]][ey+dy[i]]){
          c+=1;
        }
  }
  return c;
}
 
int main() {
  FIn;
  //freopen ("out.txt", "w", stdout);
  //freopen ("in.txt", "r", stdin);
  cin >>n >> m;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
      char x; cin >> x;
      if(x=='X') vis[i][j]=1;
      else vis[i][j]=0;
    }
  }
   cin >> sx >> sy;
   cin >> ex >> ey;
  bool  cracked = vis[ex][ey];
  vis[sx][sy]=0;
  int could_be_cracked = check();
  vis[ex][ey]=0;
  traverse(sx,sy);
 
  if(vis[ex][ey] && ((cracked  && could_be_cracked>=1) || could_be_cracked>1)) cout  << "YES";
  else cout << "NO";
 
  return 0;
}