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



int> freq;
(){
 i=0;i<4;i++){
 x;
]+=1;

size()==1){
    cout << -1 << endl;
  }
  else{
    int mx=0;
    for(auto el:freq){
      mx=max(el.second,mx);
    }
    if(mx==1)cout << 4;
    if(mx==2)cout << 4;
    if(mx==3)cout << 6;
    cout << endl;
  }
}
 
 
int main()
{
  FIn;
  // file;
  // t = 1;
  cin >> t;
  while(t--){
    freq.clear();
    solve();
  }
}