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

x,c;
 flagnn;
 flagnp;




;
  while(t--){
    cin >> n;
    x=0;
    flagnn=0;
    flagnp=0;
    s=0;
    for(int i=0;i<n;i++){
      cin >> c;
      if(c==x && c ==-1) flagnn=1;
      else if(c+x==0) flagnp=1; 
      x=c;
      s+=c;
    }
    if(flagnn)s+=4;
    else if(flagnp) ;
    else s-=4;
    cout << s << endl;
  }
  return 0;
}
 
 