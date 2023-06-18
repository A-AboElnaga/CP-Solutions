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






 cin >> t;
--){
 cin >>n;
    string s; cin >> s;
    string rslt="";
    for(auto c:s){
      if((c-'0')%2==1){
        rslt+=c;
      }
      if(rslt.size()==2)break;
    }
    if(rslt.size()==2) cout << rslt << endl;
    else cout << -1 << endl;
  }
return 0;
}