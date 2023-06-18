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
<bit>

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
 rslt,l,r;

(){
=0,l=0;
;r++){
    if(arr[r]<r-l+1){
      rslt+=(r-l)*(r-l+1)/2;
      while(arr[r]<r-l+1) l++;
      rslt-=(r-l)*(r-l+1)/2;
    }
  }
  rslt+=(r-l)*(r-l+1)/2;
  cout << rslt << endl;
}
 
int main()
{
  FIn;
  // file;
  cin >> t;
  while (t--)
  {
    cin >> n;
    for(int i=0;i<n;i++){
      cin >> arr[i];
    }
    //last breaker???
    solve();
  }
  return 0;
}