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




// file; 

 cin >> n;
int> mp;
 i=0;i<n;i++){
    cin >> x;
    mp[x]+=1;
  }
  int a = mp.rbegin()->first;
  for(auto el:mp){
    if(a%el.first==0){
      mp[el.first]-=1;
    }
  }
  cout << a << ' ';
  for(auto it=mp.rbegin();it!=mp.rend();it++){
      if(it->second>0){
        cout << it->first << endl;
        return 0;
      }
  }
 
 
  return 0;
}