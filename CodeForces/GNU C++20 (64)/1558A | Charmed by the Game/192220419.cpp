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


nb;
 rslt;
(){

a,b); b=n-a;
;
    bool odd=n%2;
    int breaks;
 
    for(int i=0;i<=a;i++){
      breaks=i;
      breaks+=na-(a-i);
      rslt.insert(breaks);
      if(odd)rslt.insert(breaks+1);
    }
    cout << rslt.size() << endl;
    while(!rslt.empty()){
      cout << *rslt.begin()<< ' ';
      rslt.erase(rslt.begin());
    } cout << endl;
}
 
int main()
{
  FIn;
  // file;
  cin >> t;
  while(t--){
    cin >> a >> b;
    solve();
  }
  return 0;
}