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
c,d;

(){






  // file;
  cin >> t;
  while(t--){
      cin >> a >> b >> c >> d;
      if(d<b || (d==b && c>a)){
        cout << "-1" << endl;
      }
      else{
          rslt = d-b;
          a+=rslt;
          b+=rslt;
          rslt+=(a-c);
          if(d==b && c>a){
            cout << "-1" << endl;
          }
          else{
              cout << rslt << endl;
          }
      }
  }
  
}