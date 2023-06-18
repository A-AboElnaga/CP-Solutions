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

 l,r,k;
 x;
 arr[200005];

(){



int main()
{
  FIn;
  // file;
  // t=1;
  cin >> t;
  while(t--){
    cin >> n >> q;
    arr[0]=0;
    for(int i=1;i<=n;i++){
      cin>> arr[i];
      arr[i]+=arr[i-1];
    }
    while(q--){
        cin >> l >> r >> k;
        if((arr[n]-arr[r]+arr[l-1]+(k*(r-l+1)))&1){
          cout << "Yes" << endl;
        }
        else{
          cout << "No" << endl;
        }
    }
  }
}