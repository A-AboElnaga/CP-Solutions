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

FIn                                                                    \
0);                                                                  \
(0);                                                                 \
::sync_with_stdio(false)

 endl '\n'


 arr[200005];
 pre_arr[200005];
 rslt,k,n,c;

(){
 n >> k;
0]=0;
  for(int i=1;i<=n;i++){
    cin >> arr[i];
    pre_arr[i]=arr[i]+pre_arr[i-1];
  }
  rslt=0;
  if(n==1){
   rslt= arr[1]+k-1;
  }
  else if(k<=n){
    for(int i=0;i+k<=n;i++){
      rslt=max(pre_arr[i+k]-pre_arr[i],rslt);
    }
    rslt+=(k)*(k-1)/2;
  }
  else{
    rslt=pre_arr[n]+(k-n)*(n)+(n-1ll)*(n)/2;
  }
  cout << rslt << endl;
}
 
 
int main() {
  FIn;
  // file;
  // t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
}