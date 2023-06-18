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
rslt;
long long arr[200005];
long long s;




;
--){
    cin >> n >> c;
    for( unsigned long long i=1;i<=n;i++){
      cin>>arr[i];
      arr[i]+=i;
    }
    sort(arr+1,arr+1+n); //,[](long long &a, long long &b){return a>b}
    s=0;
    rslt=0;
    while(rslt<=n){
      s+=arr[++rslt];
      if(s>c)
        break;
    }
    rslt-=1;
    cout << rslt << endl;
  }
  return 0;
}