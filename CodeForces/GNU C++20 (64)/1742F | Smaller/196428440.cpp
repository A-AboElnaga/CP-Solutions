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
k;
 cs;
 ct;
;
,tflag;

(){
    if(d==1){
      for(auto el:tmp){
        if(el=='a'){
          cs+=k;
        }
        else{
          sflag=1;
        }
      }
    }
    else{
      for(auto el:tmp){
        if(el=='a'){
          ct+=k;
        }
        else{
          tflag=1;
          break;
        }
      }
    }
    if(tflag || (sflag==0 && cs<ct)){
      cout <<"Yes" << endl;
    }
    else{
      cout <<"No" << endl;
    }
}
 
 
int main() {
  FIn;
  // file;  
  cin >> t;
  while(t--){
    cin >> q;
    cs=1; ct=1;
    sflag=0; tflag=0;
    while(q--){
      cin >> d >> k >> tmp;
      if(tflag){
        cout << "Yes" << endl;
        continue;
      }
      solve();
 
    }
  }
 
 
 return 0;
}