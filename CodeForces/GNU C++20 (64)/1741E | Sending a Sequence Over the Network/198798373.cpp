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


[200005];
200005];
()

seqq,0,n+3);
;
=1;i<=n;i++){
[i]<=n && seqq[i-1]==1) seqq[i+arr[i]]=1;
  if(i-arr[i]-1>=0 && seqq[i-arr[i]-1]==1) seqq[i]=1;
 }
 if(seqq[n]==1) cout << "Yes" << endl;
 else cout << "No" << endl;
 
}
 
int main()
{
  FIn;
  // file;
  // t = 1;
  cin >> t;
  while (t--)
  { 
    cin >> n;
    for(int i=1;i<=n;i++){
      cin >> arr[i];
    }
    solve();
  }
}