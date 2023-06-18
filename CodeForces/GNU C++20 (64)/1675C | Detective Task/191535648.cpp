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
    rslt =0;
    cin >> s;
    l1=0,f0=(int)s.size()-1;
    for(int i=0;i<(int)s.size();i++){
      if(s[i]=='1')l1=i;
      else if( f0==s.size()-1 && s[i]=='0')f0=i;
    } 
    rslt = f0-l1+1;
    cout << rslt << endl;
  }
 
  return 0;
  }
 
 