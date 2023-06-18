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

#define file                       \
  freopen("out.txt", "w", stdout); \
  freopen("in.txt", "r", stdin)
#define inf unsigned long long32_MAX
#define FIn    \
  cin.tie(0);  \
  cout.tie(0); \
  ios_base::sync_with_stdio(false)
#define endl '\n'
int n,k;
bool lit[10001]={};
pair<int,int> point[10001];
pair<int,int> sources[10001];

double light_up(int p){
  double loc=1e12;
  double x = point[p].first, y= point[p].second;
  for(int i=1;i<=k;i++){
    double tx=sources[i].first,ty=sources[i].second;
    loc = min(loc,pow(x-tx,2)+pow(y-ty,2));
  }
  loc = sqrt(loc);
  return loc;
}


int main()
{ 
  FIn; 
  //file;
  cin >> n >> k;
  for(int i =1;i<=k;i++){
    int x; cin >> x;
    lit[x]=1;

  }
  for(int i=1;i<=n;i++){
    int x,y; cin >> x >> y;
    point[i]={x,y};
  }
  int start=1;
  for(int i=1;i<=n;i++){
    if(lit[i]){
      sources[start]=point[i];
      start+=1;
    }
  }
  double rslt =0;
  for(int i=1;i<=n;i++){
    if(!lit[i]){
      rslt=max(rslt,light_up(i));
    }
  }
  cout << setprecision(10) << fixed;
  cout << rslt;

return 0;
}