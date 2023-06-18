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
// #define endl '\n'

even;







  // t=1;
  cin >> t;
  while(t--){
    cin >> n;
    odd=0;even=0;
    for(int i=0;i<n;i++){
      cin >> x;
      if(x%2==0)even+=x;
      else odd+=x;
    }
    if(even>odd){
      cout << "Yes" << endl;
    }
      else cout << "No" << endl;
  }
}