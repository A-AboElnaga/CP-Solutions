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

h;
g;




;
  while(t--){
    cin >> w  >> d >> h;
    int rslt = h;
    cin >> a >> b >> f >> g;
    rslt += min(abs(f-a)+min(g+b,d-g+d-b),
                abs(g-b)+min(f+a,w-f+w-a));
    cout << rslt << endl;
  }
  return 0;
}