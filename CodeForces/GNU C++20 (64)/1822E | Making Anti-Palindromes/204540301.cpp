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
<int> rslt;

(){
clear();
;
;
  mx=0;
  for(auto el:s){
    freq[el]+=1;
    mx=max(mx,freq[el]);
  }
  if(2*mx>n || n%2==1){
    cout << -1 << endl;
    return;
  }
  else{
    int x=0;
    mx=0;
    int i=0,j=n-1;
    freq.clear();
    while(i<j){
      if(s[i]==s[j]){
        x+=1;
        freq[s[i]]+=1;
        mx=max(mx,freq[s[i]]);
      }
      i++;j--;
    }
    cout << max(mx,x/2+x%2) << endl;
  }
 
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