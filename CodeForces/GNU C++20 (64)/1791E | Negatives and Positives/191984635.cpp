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
 x;
 mn;
 nc;



  // file;
  cin >> t;
  while(t--){
    cin >> n;
    rslt =0,mn= 20000000009;
    nc=0;
    for(int i=0;i<n;i++){
      cin >> x;
      rslt+=abs(x);
      mn = min(abs(x),mn);
      if(x<0) nc+=1;
    }
    if(nc%2==1){
      rslt-=mn;
      rslt-=mn;
    }
    cout << rslt << endl;
  }
 
  return 0;
}