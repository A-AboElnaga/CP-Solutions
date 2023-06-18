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

mn,loc;




// file; 
;
--){
    cin >> n >> k;
    mn=0;
    string s; cin >> s;
    for(int i=0;i<k;i++){
      if(s[i]=='W')mn+=1; 
    }
    loc =mn;
    for(int i=k;i<n;i++){
      if(s[i-k]=='W')loc-=1;
      if(s[i]=='W')loc+=1;
      mn =min(mn,loc);
    }
    cout << mn << endl;
  } 
  return 0;
}