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
"output.txt", "w", stdout);                                             \
"input.txt", "r", stdin)

FIn                                                                    \
0);                                                                  \
(0);                                                                 \
::sync_with_stdio(false)

 endl '\n'

int> freq;
;
(){
clear();
;
 i=0;i<n;i++){
x;
]+=1;
  }
  rslt=0;
  x=0;
  for(auto el:freq){
    if(el.second>=2){
      rslt+=1;
    }
    else{
      x+=1;
    }
  }
  rslt+=(x/2+x%2);
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