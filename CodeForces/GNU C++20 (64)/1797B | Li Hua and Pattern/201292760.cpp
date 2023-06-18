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



1005][1005];
(){
 n >> k ;
 i=1;i<=n;i++){
int j=1;j<=n;j++){
>> arr[i][j];

  }
  for(int it=1,id=n;it<=n;it++,id--){
    for(int jl=1,jr=n;jl<=n;jl++,jr--){
      if(arr[it][jl]!=arr[id][jr]){
          arr[it][jl]=arr[id][jr];
          k--;
          if(k<0){
            cout << "No" << endl;
            return;
          }
      }
    }
  }
  // cout << k << endl;
  if(k%2==0||n%2==1){
    cout << "Yes" << endl;
  }
  else{
    cout << "No" << endl;
  }
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