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
 node_type pair<pair<int/*time*/,int/*security*/>,int/*node*/>


char x;
 rslt,n;
 loc;
(){
;
();
  n*=2;
  rslt=0,loc=0;
  x='0';
  for(int i=0;i<n-1;i++){
    if(s[i%(n/2)]=='1'){
      loc+=1;
      rslt=max(rslt,loc);
    }
    else{
      loc=0;
    }
  }
  if(rslt==s.size()){
    rslt*=rslt;
    cout << rslt << endl;
  }
  else{
    rslt+=1;
    rslt= (rslt/2)*(rslt-(rslt/2));
    cout << rslt << endl;
 
  }
};
 
int main() {
  FIn;
  // file;
  // t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
}