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
 
#define FIn    \
  cin.tie(0);  \
  cout.tie(0); \
  ios_base::sync_with_stdio(false);
#define endl '\n'
using namespace std;
 
 
int main()
{
  FIn;
  int t; cin >> t; 
  while(t--){
    int n,k; cin >> n >> k;
    pair<int,int> p_h[n];
 
    int mx_h = 0;
    for(int i=0;i<n;i++){
      int h; cin >> h;
      p_h[i]= make_pair(0,h);
      mx_h = max(mx_h,h);
    }
    for(int i=0;i<n;i++){
      int p; cin >> p;
      p_h[i]= make_pair(p,p_h[i].second);
    }
    sort(p_h,p_h+n);
    int alive = 0;
    int killed = 0;
    bool flag =1;
    while(mx_h-killed>0 && flag){
        killed +=k;
        while(p_h[alive].second-killed<=0 &&flag){
          alive+=1;
          if(alive==n) flag=0;
        }
        if(flag)
          k-=p_h[alive].first;
        if(k<=0) flag =0;
    }
    if(flag || killed >=mx_h) cout << "YES" << endl;
    else cout << "NO" << endl;
 
  }
  return 0;
}