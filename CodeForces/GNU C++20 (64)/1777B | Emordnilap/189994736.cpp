<algorithm>
<cmath>
<deque>
<functional>
<iomanip>
<iostream>
<map>
<numeric>
<queue>
<set>
<stack>
<string>
<unordered_set>
<utility>
<valarray>
<vector>
<sstream>
<bitset>

namespace std;

 file                       \
"out.txt", "w", stdout); \
"in.txt", "r", stdin)
 inf unsigned long long32_MAX
FIn    \
0);  \
(0); \
::sync_with_stdio(false)
 endl '\n'

long long n;
int(1e9)+7;

 f_rslt;
 fac(long long n){
long rslt =1;
 i=1;i<=n;i++){
 ((rslt%mod) *(i%mod))%mod;
  }
  return rslt;
}
 
int main()
{
  FIn;
  // file;
  cin >> t;
  while(t--){
    cin >> n;
    f_rslt = fac(n);
    f_rslt = (f_rslt*(n*((n-1))%mod))%mod;
    cout << f_rslt << endl;
  }
  return 0;
}