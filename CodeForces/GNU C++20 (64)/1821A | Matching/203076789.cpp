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
<stack>
<string>
<unordered_set>
<utility>
<valarray>
<vector>
namespace std;

 file                                                                   \
"output.txt", "w", stdout);                                             \
"input.txt", "r", stdin)

FIn                                                                    \
0);                                                                  \
(0);                                                                 \
::sync_with_stdio(false)

 endl '\n'



 rslt;
(){
;


]=='0'){
    cout << 0 << endl;
    return;
  }
  if(s[i]=='?') rslt=9;
  else rslt=1;
  i++;
  for(;i<s.size();i++){
    (s[i]=='?')? rslt*=10 : rslt; 
  }
  cout << rslt << endl;
};
 
int main() {
  FIn;
  // file;
  // t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
}