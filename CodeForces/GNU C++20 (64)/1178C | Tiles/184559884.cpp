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
  int mod = 998244353;
  int w,h; cin >> w >> h;
  long long rslt =1;
  for(int i=0;i<w;i++){
    rslt=((rslt%mod)*2)%mod;
  }
  for(int i=0;i<h;i++){
    rslt=((rslt%mod)*2)%mod;
  }
  cout << rslt  << endl;
  return 0;
}
 
                              
                               