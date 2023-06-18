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
<bitset>
bits/stdc++.h>
namespace std;

 file                       \
"out.txt", "w", stdout); \
"in.txt", "r", stdin)

FIn    \
0);  \
(0); \
::sync_with_stdio(false)
 endl '\n'



s_copy;
(){




=n-1;i>=0;i--){
  if(s[i]<x){
    x=s[i];
    ind=i;
  }
 }
 if(ind!=0){
    s.erase(ind,1);
    s=x+s;
 }
 cout << s << endl;
}
 
int main()
{
  FIn;
  // file;
  // t = 1;
  cin >> t;
  while(t--){
    solve();
  }
}