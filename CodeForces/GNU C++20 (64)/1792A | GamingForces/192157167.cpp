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
  while(t--){
    cin >> n;
    ones =0;rslt=0;
    for(int i=0;i<n;i++){
      cin >> x;
      if(x==1) ones+=1;    
    }
    rslt = ones/2;
    rslt+= n-(2*rslt);
    cout << rslt << endl;
  }
 
  return 0;
}