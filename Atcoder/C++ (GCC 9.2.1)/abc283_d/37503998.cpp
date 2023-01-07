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
int rslt =0;
bool vis[21][21]={{0}};
bool land[21][21];
void dfs(int i,int j, int &w,int &h){
  vis[i][j]=1;
  rslt+=1;
  for(int dx=-1;dx<=1;dx++){
    if(i+dx > 0 && i+dx <= w && land[i+dx][j]==1 && vis[i+dx][j]==0){
      dfs(i+dx,j,w,h);
    }
  }
  for(int dx=-1;dx<=1;dx++){
    if(j+dx > 0 && j+dx <= h && land[i][j+dx]==1 && vis[i][j+dx]==0){
      dfs(i,j+dx,w,h);
    }
  }

}

int main()
{
  FIn;
  int n,m; cin >> n >> m;
  long long rslt = (n*(n-1))/2;
  rslt+= m*(m-1)/2;
  cout << rslt;
  return 0;
}