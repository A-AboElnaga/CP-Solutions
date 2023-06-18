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
<sstream>
<stack>
<string>
<unordered_set>
<utility>
<valarray>
<vector>
<bit>

namespace std;

 file                                                                   \
"out.txt", "w", stdout);                                             \
"in.txt", "r", stdin)
 inf unsigned long long32_MAX
FIn                                                                    \
0);                                                                  \
(0);                                                                 \
::sync_with_stdio(false)
 endl '\n'

200005];
target,current;
;

(){
    target = MX;
    for(int i=0;i<32 && target>0;i++){
        temp=0;
        for(int j=0;j<n && target>0;j++){
          if(arr[j]==-1){
            continue;
          }
          if((arr[j]|current)>temp){
            temp=arr[j]|current;
            x=j;
          }
        }
        cout << arr[x] << ' '; 
        current=temp;
        target=MX-current;
        arr[x]=-1;
    }
}
 
int main() {
  FIn;
  // file;  
  cin >> t;
  while(t--){
    cin >> n;
    MX=0;current=0;
    for(int i=0;i<n;i++){
      cin >> arr[i];
      MX|=arr[i];
    }
    solve();
    for(int i=0;i<n;i++){
      if(arr[i]!=-1){
        cout << arr[i] << ' ';
      }
    }
    cout << endl;
  }
 
 
 return 0;
}