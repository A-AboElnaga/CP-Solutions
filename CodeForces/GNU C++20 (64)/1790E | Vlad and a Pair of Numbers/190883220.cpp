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


long long x;
long long a,b;
long long val;



// file; 
  cin >> t;
  while(t--){
    cin >> x;
    val=1;
    a = x;
    b = x;
    while (val <=x){
      if(val&b){
        b-=val/2;
        a+=val/2;
      }
      val*=2;
    }
    val = a^b;
    if(val == x && a+b == 2*x){
      cout << a << ' ' << b << endl;
    }
    else cout << -1 << endl;
  }
  return 0;
}