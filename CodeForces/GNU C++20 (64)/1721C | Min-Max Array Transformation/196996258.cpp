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

int> rslt[200005];
200005],b[200005];





;
  while(t--){
    cin >> n;
    for(int i=0;i<n;i++){
      cin >> a[i];
    }
    for(int i=0;i<n;i++){
      cin >> b[i];
    }
    r=n-1;
    l=n-1;
    for(int i=n-1;i>=0;i--){
      while(l>0 && b[l-1]>=a[i]){
        l-=1;
      }
      rslt[i].first=b[l]-a[i];
      rslt[i].second=b[r]-a[i];
      if(l==i){
        r=i-1;
        l=min(r,l);
      }
 
    }
    for(int i=0;i<n;i++){
      cout << rslt[i].first << ' ';
    }cout << endl;
 
    for(int i=0;i<n;i++){
      cout << rslt[i].second << ' ';
    }cout << endl;
 
  }
  return 0;
}