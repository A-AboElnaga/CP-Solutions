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
(int a, int b, int c, int d){
&& a < c && d >b && d >c)
true;
false;






  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    int l=0,r=(int)1e9;
    int x; cin >> x;
    for(int i=1;i<n;i++){
      int c; cin >> c;
      if(c>x){// 2,6 ? 2,7?
        r=min(r,(int)floor((c+x)/2.0));
      }
      else if(c==x){
        ;
      }
      else{
        l=max(l,(int)ceil((c+x)/2.0));
      }
      x=c;
    }
    if(l>r) cout << -1 << endl;
    else{
      cout << l << endl;
    }
  }
return 0;
}