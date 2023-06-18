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

 file                                                                   \
"out.txt", "w", stdout);                                             \
"in.txt", "r", stdin)
 inf unsigned long long32_MAX
FIn                                                                    \
0);                                                                  \
(0);                                                                 \
::sync_with_stdio(false)
 endl '\n'

262150];

(){

=1;
step<m){
   for(int i=1;i<=m-step;i+=(2*step)){
      if(arr[i]!=min(arr[i],arr[i+step])){
        swap(arr[i],arr[i+step]);
        rslt+=1;
      }
      if(!(arr[i]&1) || arr[i+step]-arr[i]!=step){
        cout << -1 << endl;
        return;
      }
   }
   step*=2;
  }
  cout << rslt << endl;
}
 
 
int main() {
  FIn;
  // file;  
  cin >> t;
  while(t--){
    cin >> m;
    for(int i=1;i<=m;i++){
      cin >> arr[i];
    }
    solve();
  }
 
 
 return 0;
}