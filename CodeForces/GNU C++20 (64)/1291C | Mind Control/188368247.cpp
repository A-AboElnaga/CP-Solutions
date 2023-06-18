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
m,k; cin >> n >> m >> k;
 arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    if(k>=m){
      int rslt=0;
      for(int i=0;i<m;i++){
        rslt =max(rslt,arr[i]);
      }
      for(int i=n-1;i>n-1-m;i--){
        rslt = max(rslt,arr[i]);
      }
      cout << rslt << endl;
    }
    else{
        int nuc = m-k-1;
        int am  = n-m;
        int best= 0;
 
        for(int i=0;i<=k;i++){
          int loc = (int) 1e9 +5;
          for(int j=0;j<=nuc;j++){
           int mn =max(arr[i+j],arr[i+j+am]);
            loc  = min(loc,mn);
          }
          best = max(loc,best);
        }
        cout << best << endl; 
 
    }
 
 
  }
 
return 0;
}