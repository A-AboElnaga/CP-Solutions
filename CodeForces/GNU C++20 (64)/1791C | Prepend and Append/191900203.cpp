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
 string s;





;
--){
 n;
    cin >> s;
    rslt=n;
    for(int i=0;i<n/2;i++){
      if(s[i]==s[n-i-1]){
        break;
      }
      rslt-=2;
    }
    rslt = max(0,rslt);
    cout << rslt << endl;
  }
}