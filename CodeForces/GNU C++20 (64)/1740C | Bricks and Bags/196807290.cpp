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

200005];

(){

 i=0;i<n-2;i++){
max(rslt,arr[i+1]-arr[i]+arr[n-1]-arr[i]);
  } 
  for(int i=1;i<n-1;i++){
    rslt=max(rslt,arr[i+1]-arr[i]+arr[i+1]-arr[0]);
  }
  cout << rslt << endl;
}
 
 
int main() {
  FIn;
  // file;  
  cin >> t;
  while(t--){
    cin >> n;
    for(int i=0;i<n;i++){
      cin >> arr[i];
    }
    sort(arr,arr+n);
    solve();
  }
 
 
 return 0;
}