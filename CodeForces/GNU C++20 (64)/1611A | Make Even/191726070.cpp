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

 rslt;





;
--){
    rslt =-1;
    cin >> s;
    if((s[s.size()-1]-'0')%2==0) cout  << 0;
    else if((s[0]-'0')%2==0) cout << 1;
    else{
      for(char c:s){
        if((c-'0')%2==0) {rslt=2; break;}
      }
      cout << rslt;
    }
    cout << endl;
  }
  return 0;
}