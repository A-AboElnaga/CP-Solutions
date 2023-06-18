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


200005];
200005];



// file; 
;
  while(t--){
    cin >> n;
    for(int i=0;i<n;i++){
      cin >> s[i];
    }
    for(int i=0;i<n;i++){
      cin >> f[i];
    }
    cout << f[0]-s[0] << ' ';
    for(int i=1;i<n;i++){
 
      cout << f[i] - max(s[i],f[i-1]) << ' ';
    }
    cout << endl;
 
  } 
  return 0;
}