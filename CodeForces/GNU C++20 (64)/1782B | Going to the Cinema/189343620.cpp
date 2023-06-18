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

arr[200005],people_going[200005];
 rslt;




;
  while(t--){
    rslt =0;
    cin >> n;
    for(int i=0;i<=n;i++) {arr[i]=0;people_going[i]=0;}
    for(int i=0;i<n;i++){
      cin >> x;
      arr[x]+=1;
    }
    people_going[0]=arr[0];
    for(int i=1;i<n;i++){
      people_going[i]=people_going[i-1]+arr[i];
    }
    if(arr[0]==0)rslt=1;
    for(int i=0;i<n;i++){
      if(people_going[i]>i && people_going[i+1]<=i+1){
        rslt+=1;
      }
    }
    cout << rslt << endl;
  }
  return 0;
}