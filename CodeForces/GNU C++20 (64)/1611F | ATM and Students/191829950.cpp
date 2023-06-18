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



 long s,x,st;


 students[200005];


int main()
{
  FIn;
  // file;
  cin >> t;
  while(t--){
    cin >> n >> s;
    for(int i=1;i<=n;i++){
      cin >> students[i];
    }
    l=1,r=0;bl=0,br=0;
    x=s; rslt=0;
    for(int i=1;i<=n;i++){
      r+=1;
      st = students[r];
      x+=st;
      while(x<0){
        x-=(long long)students[l++];
      }
      if(r-l+1>rslt && x >= 0){
        rslt = r-l+1;
        br=r;
        bl=l;
      }
    }
    if(rslt==0) cout << -1 << endl;
    else cout << bl << ' ' << br << endl;
 
  }
  return 0;
}