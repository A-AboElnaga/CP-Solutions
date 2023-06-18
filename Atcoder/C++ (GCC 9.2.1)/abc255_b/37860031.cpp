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


int main()
{ 
  FIn; 
  //file;
  long long x,a; cin >> x >> a;
  long long d, n; cin >> d >> n;
  if(d>=0 && x<=a) cout << abs(x-a);
  else if ( d>=0 && x >= a+d*(n-1)) cout << abs(x - (a+d*(n-1)));
  else if(d<=0 && x>=a) cout << abs(x-a);
  else if(d<=0 && x <= a+d*(n-1))cout << abs(x - (a+d*(n-1)));
  else if(d==0) cout << abs(x-a);
  else {
    long long t =(x-a)/d;
    long long rslt = min (  abs(x-(a+d*t))  , abs(x-(a+d*(t+1)))  );
    cout << rslt;
  }


return 0;
}