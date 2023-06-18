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









  cin >> t;
  while(t--){
    cin >> n;
    l=0,r=n-1; rslt = (n-1);
    lf=0;
    for(int i=0;i<n;i++){
      cin >> x;
      if(!lf){
        if(x==1) l=i;
        else lf=1;
      }
      if(x==0) r=i+1;    
    }
    rslt = r-l;
    cout << rslt << endl;
  }
  return 0;
}