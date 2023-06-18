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
(int a, int b, int c, int d){
&& a < c && d >b && d >c)
true;
false;






  int t; cin >> t;
  while(t--){
    int a, b, c, d;
    cin >> a >> b >> c >>d;
    if( check(a,b,c,d) || check(c,a,d,b) || check(d,c,b,a)|| check(b,d,a,c)){
      cout << "YES" << endl;
    }
    else cout << "NO" << endl;
 
 
  }
return 0;
}