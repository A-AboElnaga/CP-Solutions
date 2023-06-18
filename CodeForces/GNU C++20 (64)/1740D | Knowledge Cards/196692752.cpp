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
100005];
 cornered[100005];
 counter,nextcard;

(){
=0;
  nextcard=k;
  for(int i=0;i<k;i++){
    if(arr[i]==nextcard){
      nextcard-=1;
    }
    else{
      cornered[arr[i]]=1;
      counter+=1;
    }
    while(nextcard>0 && cornered[nextcard]){
      cornered[nextcard]=0;
      nextcard-=1;
      counter-=1;
    }
    if(counter>mx){
      cout << "TIDAK" << endl;
      return;
    }
  }
  cout << "YA" << endl;
}
 
 
int main() {
  FIn;
  // file;  
  cin >> t;
  while(t--){
    cin >> n >> m >> k;
    mx = n*m -4;
    for(int i=0;i<k;i++){
      cin >> arr[i];
      cornered[arr[i]]=0;
    }
    solve();
 
  }
 
 
 return 0;
}