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

 file                                                                   \
"out.txt", "w", stdout);                                             \
"in.txt", "r", stdin)
 inf unsigned long long32_MAX
FIn                                                                    \
0);                                                                  \
(0);                                                                 \
::sync_with_stdio(false)
 endl '\n'



 {


;
--){
 n;
    if(n%2==0){cout << "No" << endl; continue;}
    cout << "Yes" << endl;
    o=n; e=o+1;
    while(e<=2*n){
      cout << o << ' ' << e << endl;
      e+=2; o-=1;
    }
    o=1;e=2*n-1;
    while(e>n){
      cout << o << ' ' << e << endl;
      o+=1; e-=2;
    }
  }
 
 
  return 0;
}