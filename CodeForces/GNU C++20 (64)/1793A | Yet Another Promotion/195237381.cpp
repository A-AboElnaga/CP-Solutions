<algorithm>
bits/stdc++.h>
<bitset>
<cmath>
<deque>
<functional>
<iomanip>
<iostream>
<map>
<numeric>
<queue>
<set>
<sstream>
<stack>
<string>
<unordered_set>
<utility>
<valarray>
<vector>
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


long long a,b,n,m;
long long rslt;




;
  while (t--)
  {
    cin >> a >>b;
    cin >> n >> m;
      rslt= min(a,b)*n;
      rslt= min(rslt,(n/(m+1))*a*(m) + n%(m+1)*min(a,b));
    cout << rslt << endl;
  }
return 0;
}