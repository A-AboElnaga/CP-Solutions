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

,x;
 sm;




;
  while(t--){
    cin >> n;
    mx=0; sm=0;
    for(int i=0;i<n;i++){
      cin >> x;
      mx = max(x,mx);
      sm+=x;
    }
    sm-=mx;
    if(mx==0) cout << 0;
    else if(sm>=mx) cout << 1;
    else cout << mx-sm ;
    cout << endl; 
 
  }
  return 0;
}