<algorithm>
bits/stdc++.h>
<bitset>
<cmath>
<deque>
<functional>
<iomanip>
<iostream>
<map>
<numeric>
<queue>
<set>
<sstream>
<stack>
<string>
<unordered_set>
<utility>
<valarray>
<vector>
<bit>

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

 l,r;
 cl,cr;
 r1,r2,x;



{
  FIn;
  // file;
  cin >> t;
  while (t--)
  {
    cin >> l >> r;
    cl=sqrt(l);cr=sqrt(r);
    while(cl*cl>l){
      cl-=1;
    }
    while((cl+1)*(cl+1)<l){
      cl+=1;
    }
    while(cr*cr>r){
      cr-=1;
    }
    while((cr+1)*(cr+1)<r){
      cr+=1;
    }
    r1=(cl-1)*3; r2=(cr-1)*3;
    x=cl*cl;
    for(;x<l;x+=cl){
      r1+=1;
    }
    x=cr*cr;
    for(;x<=r;x+=cr){
      r2+=1;
    }
    r2-=r1;
    cout << r2 << endl;
  }
  return 0;
}