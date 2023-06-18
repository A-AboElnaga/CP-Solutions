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

100];
100];





  // file;
  cin >> t;
  while(t--){
    cin >> n;
    for(int i=0;i<n;i++){
      cin >> a_arr[i];
    }
    for(int i=0;i<n/2;i++){
      int product = a_arr[i]* a_arr[n-i-1];
      b_arr[i]= product/a_arr[i];
      b_arr[n-i-1]=-product/a_arr[n-i-1];
    }
    for(int i=0;i<n;i++){
      cout << b_arr[i] << ' ';
    }
    cout << endl;
  }
  return 0;
}