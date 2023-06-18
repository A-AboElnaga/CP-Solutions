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

mx,avg,rem;



// file; 
;
--){
 n >> s >> r;
    mx= s-r;
    cout << mx << ' ';
    s=r;
    n-=1;
    avg =  s/n;
    rem = s%n;
    for(int i=0;i<rem;i++){
      cout << avg+1 << ' ';
    }
    for(int i=rem;i<n;i++){
      cout << avg << ' ';
    }
    cout << endl;
  }
  return 0;
}