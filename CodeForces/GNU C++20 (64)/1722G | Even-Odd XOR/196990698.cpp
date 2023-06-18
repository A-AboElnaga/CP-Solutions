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
bits/stdc++.h>
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






;
--){
 n;
    r=1<<29;
    f=0;
    for(int i=1;i<=n-3;i++){
      cout << i << ' ';
      f^=i;
    }
    cout << r << ' ' << (r<<1) <<' ';
    f^=r; f^=(r<<1);
    cout << f << endl;
  }
  return 0;
}