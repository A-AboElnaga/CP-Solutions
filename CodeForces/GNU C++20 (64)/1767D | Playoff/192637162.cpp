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

 n;


 l,r;



// file; 
  cin >> n;
  cin >> s;
  l=r=0;
  for(auto c:s)if(c=='1')l+=1;
  else r+=1;
  l = pow(2,l);
  r = pow(2,n)-pow(2,r)+1;
  for(;l<=r;l++){
    cout << l << ' ';
  }
 
  return 0;
}