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
--){
    cin >> a >> b;
    a=abs(a);b=abs(b);
    c=min(a,b);
    rslt = c*2;
    a-=c;b-=c;
    a+=b;
    if(a>0){rslt+=1;a-=1;}
    rslt+=a*2;
    cout << rslt << endl;
  }
  return 0;
}