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
--){
 cin >> n;
int,int> mp;
    for(int i=0;i<n;i++){
      int x; cin>> x;
      mp[x]+=1;
    }
    long long rslt;
    if(mp.rbegin()->first!=mp.begin()->first) 
      rslt =2ll * (long long) mp.begin()->second * (long long)mp.rbegin()->second ;
    else 
       rslt =  (long long) mp.begin()->second * ((long long) mp.begin()->second-1ll);
    cout << rslt << endl;
  }
  return 0;
}