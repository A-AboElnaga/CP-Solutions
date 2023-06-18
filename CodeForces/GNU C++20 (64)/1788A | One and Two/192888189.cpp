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
arr[1005];

 {


;
--){
 n;
]=0;
    flag=1;
    for(int i=1;i<=n;i++){
      cin >> arr[i];
      if(arr[i]==2){
        arr[i]=arr[i-1]+1;
      }
      else arr[i]=arr[i-1];
    }
    for(int i=1;i<=n-1;i++){
      if(arr[i]==arr[n]-arr[i]){
        cout << i << endl;
        flag=0;
        break;
      }
    }
    if(flag) cout << -1 << endl;
 
  }
 
 
  return 0;
}