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

rslt,counter;
<int> ms;
int> mp;



// file; 
;
  while(t--){
    rslt =0;
    ms.clear();
    mp.clear();
    cin >> n;
    counter=0;
    for(int i=0;i<n;i++){
        cin >> x;
        ms.insert(x);
    }
    for(auto el:ms){
      mp[el]+=1;
      if(mp[el-1]>0){
        mp[el-1]-=1;
      }
    }
    for(auto el:mp){
      rslt+=el.second;
    }
    cout << rslt << endl;
  }
  return 0;
}