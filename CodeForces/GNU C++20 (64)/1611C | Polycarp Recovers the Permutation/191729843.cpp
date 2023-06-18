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




;
--){
    cin >> n;
    for(int i=1;i<=n;i++){
      cin >> arr[i];
    }
    if(arr[n]!=n && arr[1]!=n){cout << -1 << endl; continue;}
    for(int i=n;i>=1;i--){
      cout << arr[i] << ' ';
    }
    cout << endl;
  }
  return 0;
}