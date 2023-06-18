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
 long n;
 ans;
(){
;
){
<< 1 << endl;
;

  if(n%2==1){
    cout << -1 << endl;
    return;
  }
  for(int i=0;i<n;i++){
    if(i%2==0){
      cout << n-i << ' ';
    }
    else{
      cout << i<< ' ';
    }
  }
  cout << endl;
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