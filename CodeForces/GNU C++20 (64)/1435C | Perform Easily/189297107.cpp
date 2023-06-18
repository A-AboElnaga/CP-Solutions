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

6],n;
100005];





 
  for(int i=0;i<6;i++){
    cin >> arr_a[i];
  }
  sort(arr_a,arr_a+6);
  set<pair<int,int>> s;
  cin >> n; int x;
  for(int i=0;i<n;i++){
    cin >> x;
    s.insert({x-arr_a[5],5});
  }
  int rslt = s.rbegin()->first - s.begin()->first;
  while(true){
    int note = s.begin()->first +arr_a[s.begin()->second];
    int next = s.begin()->second -1;
    s.erase(s.begin());
    if(next==-1) break;
    s.insert({note-arr_a[next],next});
    rslt = min(s.rbegin()->first - s.begin()->first,rslt);
  }
  cout << rslt;
  return 0;
}