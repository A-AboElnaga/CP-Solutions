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






= "codeforces";
 word[26];
 i=0;i<26;i++)word[i]=0;
  for(auto c:s) word[c-'a']=1;
  int t; cin >> t;
  char x;
  while(t--){
    cin >> x;
    if(word[x-'a']==1) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
}