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
 string s;
loc;






;
  while(t--){
    cin >> n;
    cin >> s;
    rslt=0;
    for(int i=0;i<27;i++){a[i]=0;b[i]=0;}
    a[s[0]-'a']+=1;
    for(int i=1;i<n;i++){
      b[s[i]-'a']+=1;
    }
    rslt=0;
    for(int i=0;i<27;i++){
      rslt+=min(1,a[i]);
      rslt+=min(1,b[i]);
    }
    loc=rslt;
    for(int i=1;i<n-1;i++){
        loc=0;
        a[s[i]-'a']+=1;
        b[s[i]-'a']-=1;
        for(int i=0;i<27;i++){
          loc+=min(1,a[i]);
          loc+=min(1,b[i]);
        }
        rslt = max(rslt,loc);
    }
    cout << rslt << endl;
  }
 
 
  return 0;
}