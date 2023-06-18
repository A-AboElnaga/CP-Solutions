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



;




  cin >> t;
  while(t--){
    cin >> n; cin >> s;
    n=n<<1; rslt=1;
    x='(';
    for(int i=1;i<n;i++){
      if(s[i]=='(' && x=='('){
        rslt+=1;
      }
      x=s[i];
    }
    cout << rslt << endl;
  }
  return 0;
}