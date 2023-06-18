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


100005];
[100005];





  cin >> t;
  while(t--){
    int n,k ;cin >> n >> k;
    for(int i =0;i<n;i++){
      cin >> arr[i];
      sorted[i]=arr[i];      
    }
    sort(sorted,sorted+n);
    c=1;
    int *d;
    int u; u=0;
    while(u<n){
      d = lower_bound(sorted,sorted+n,arr[u]);
      while( d!=sorted+n &&  u<n &&  *d==arr[u]){
        u+=1;
        d++;
      }
      if(u<n) c+=1;
    
    }
    // cout << c << endl;
    if(c<=k) cout << "Yes" << endl;
    else cout << "No" << endl;
 
  }
 
  return 0;
}
 
 