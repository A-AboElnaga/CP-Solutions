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


200005],b;

 to_zero;
 to_nonZ;



  // file; 
  cin >> t;
  while(t--){
    cin >> n;
    for(int i=0;i<n;i++){
      cin >> a[i];
    }
    flag=1;
    to_zero=0;
    to_nonZ=-1;
    for(int i=0;i<n;i++){
      cin >> b;
      if(a[i]<b) flag=0;
      else if(b==0){
        to_zero=max(to_zero,a[i]);
      }
      else{
        if(to_nonZ==-1)
            to_nonZ= a[i]-b;
        else if(to_nonZ!=a[i]-b){
            flag=0;
        } 
      }
    }
    if(!flag || (to_zero>to_nonZ && to_nonZ!=-1)){
      cout << "No" << endl;
    }
    else cout << "Yes" << endl;
  }
  return 0;
}