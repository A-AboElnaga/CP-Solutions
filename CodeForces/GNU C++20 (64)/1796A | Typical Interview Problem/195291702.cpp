<algorithm>
bits/stdc++.h>
<bitset>
<cmath>
<deque>
<functional>
<iomanip>
<iostream>
<map>
<numeric>
<queue>
<set>
<sstream>
<stack>
<string>
<unordered_set>
<utility>
<valarray>
<vector>
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









  string base =  "FBFFBFFB";
  bool flag;
  cin >> t;
  while(t--){
    flag =0;
    cin >> k;
    cin >> s;
    
    for(int i=0;i<8;i++){
      flag=1;
      for(int j=0;j<k;j++){
        if(base[(i+j)%8]!=s[j]){
          flag=0;
          break;
        } 
      }
      if(flag==1) break;
    }
    if(flag) cout <<"Yes";
    else cout << "NO";
    cout << endl; 
  }
 
return 0;
}