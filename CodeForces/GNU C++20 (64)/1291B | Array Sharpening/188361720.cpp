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
 point =n;
    bool chk=1;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
      int x = arr[i];
      if(x>=i) continue;
      else{
        point=i-1;
        break;
      }
    }
    for(int i=n-1;i>=point;i--){
      int x = arr[i];
      if(x>=n-1-i) arr[i]=n-i-1;
      else{
        chk=0;
        break;
      }
    }
    if(chk) cout << "Yes" << endl;
    else cout << "No" << endl;
 
   }
return 0;
}