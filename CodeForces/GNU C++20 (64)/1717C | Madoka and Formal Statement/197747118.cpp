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
200005];

(){
;
int i=0;i<n;i++){
[i]>b[i] ||((b[(i+1)%n]-b[i])<-1 && b[i]!=a[i]) ){
          flag=0;
          break;
      }
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No"  << endl;
}
 
 
int main()
{
  FIn;
//   file;
  cin >> t;
  while(t--){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cin >> b[i];
    }
    solve();
  }
}