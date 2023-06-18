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

 rslt=0;
 start,x;
// int arr[20005];
int> mp;



{
  FIn;
  // file;
  cin >> t;
  while(t--){
    cin >> n;
    mp.clear();
    for(int i=0;i<n;i++){
      cin >> start;
      mp[start]+=1;
    }
    rslt = 0;
    start=1;
    for(auto el:mp){
      if(el.first>=start){
        x = el.first-start;
        rslt += (x*(x+1))/2;
        x=max(x-el.second,0ll);
        rslt -= x*(x+1)/2;
        start+= min((long long)el.second,(long long)el.first-start+1ll);
      }
    }
    cout << rslt << endl;
  }
 
  return 0;
}