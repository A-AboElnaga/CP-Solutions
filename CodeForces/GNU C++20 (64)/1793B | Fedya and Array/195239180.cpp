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








;
  while(t--){
    cin >> y >> x;
    c = 2ll*(y-x);    
    cout << c << endl;
    for(int i=x;i<y;i++){
      cout << i << ' ';
    }
    for(int i=y;i>x;i--){
      cout << i << ' ';
    } cout << endl;
  }
return 0;
}