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

FIn    \
0);  \
(0); \
::sync_with_stdio(false)

 endl '\n'


arr[100005];
 rslt,pre,loc;
=1;
(){

pre=0;
 n >> k;
  halved=2;
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  for(int i=0;i<n;i++){
    loc=pre;
    halved=2;
    for(int j=0;j<31 && i+j<n;j++){
      loc+=(long long)(arr[i+j]/halved);
      halved=halved<<1;
    }
    rslt=max(rslt,loc);
    pre+=(long long)(arr[i]-k);
  }
  rslt=max(pre,rslt);
 
  cout << rslt << endl;
}
 
int main()
{
  FIn;
  // file;
  // t = 1;
  cin >> t;
  while(t--){
    solve();
  }
}