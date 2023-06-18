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

(){

;

  if(s.size()==1){
    if(s[0]=='^'){cout << 1 <<endl; return;}
    else {cout << 2 << endl; return;}
  }
  for(int i=0;i<s.size();i++){
    if(s[i]=='^') x='^';
    else if(s[i]=='_' &&x!='^'){
      rslt+=1;
      x='_'; 
    }
    x=s[i];
  }
  if(s[s.size()-1]=='_'){
    rslt+=1;
  }
  cout << rslt << endl;
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