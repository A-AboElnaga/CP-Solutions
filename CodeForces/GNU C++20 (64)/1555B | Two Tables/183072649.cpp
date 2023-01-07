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
  int t; cin >>t;
  while(t--){
  long double rw,rh; cin >> rw >>rh;
  long double x1,y1,x2,y2; cin >> x1 >> y1 >> x2 >>y2;
  long double w,h; cin >> w >> h;
    long double rslt =rw+rh;
    long double zero=0;
    if(w+(x2-x1)<=rw){
        rslt = min(max(zero,w-x1),max(zero,x2-(rw-w)));
    }
    if(h+(y2-y1)<=rh){
        rslt = min({max(zero,h-y1),max(zero,y2-(rh-h)),rslt}); 
    }
    cout << setprecision(12) << fixed;
    if(rslt+1!=rw+rh+1)
      cout <<rslt<< endl;
    else cout << -1 << endl;
  }
  return 0;
}
 
 
                              