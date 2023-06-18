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
bits/stdc++.h>
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

arr[31];






;
  while(t--){
    rslt=0;
    flag=1;
    cin >> n;
    for(int i=0;i<n;i++){
      cin >> arr[i];
    }
    for(int i=n-1;i>=1 && flag ;i--){
      while(arr[i]<=arr[i-1]){
          if(arr[i-1]==0){flag=0; break;}
          arr[i-1]/=2;
          rslt+=1;
        }
      }
    for(int i=1;i<n && flag;i++){
      if(arr[i]<=arr[i-1]){
        flag=0;
        break;
      }
    }
    if(flag) cout << rslt << endl;
    else cout << -1 << endl;
    
    }
 
  return 0;
  }
 
 