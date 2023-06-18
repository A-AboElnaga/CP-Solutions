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
 arr[n];
    int sorted[n];
    for(int i=0;i<n;i++){
      cin >> arr[i];
      sorted[i]=arr[i];
    }
    for(int i=n-1;i>0;i-=2){
      sorted[i]=max(arr[i],arr[i-1]);
      sorted[i-1]=min(arr[i],arr[i-1]);
    }
    if(is_sorted(sorted,sorted+n)) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
return 0;
}