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

10004];

 {


;
--){
 n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    if(arr[0]==1)arr[0]+=1;
    for(int i=0;i<n-1;i++){
        if(arr[i+1]==1)arr[i+1]+=1;
        while(arr[i+1]%arr[i]==0){
          arr[i+1]+=1;
        }
        cout << arr[i] << ' ';
    }
    cout << arr[n-1];
    cout << endl;
  }
 
 
 return 0;
}