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

200005];
;
(){
[0]>=arr[0]-1){
<< '0' << endl;
;

];
  if(n==0 || n-arr[1]>0){
    cout << '1' << endl;
    return;
  }
  else{
    cout << 2 << endl;
    return;
  }
 
}
 
int main()
{
  FIn;
//   file;
  cin >> t;
  while(t--){
      cin >> n;
      for(int i=0;i<5;i++){
          arr[i]=0;
      }
      for(int i=0;i<n;i++){
        cin >> x;
        if(x<5)
          arr[x]+=1;
      }
      solve();
  }
  
}