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


200005];
 ans;
(){
;
 i=0;i<n;i++){
 arr[i];

  sort(arr,arr+n);
  ans= max((long long)arr[0]*(long long)arr[1],(long long)arr[n-1]*(long long)arr[n-2]);
  cout << ans << endl;
}
 
int main() {
  FIn;
  // file;
  // t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
}