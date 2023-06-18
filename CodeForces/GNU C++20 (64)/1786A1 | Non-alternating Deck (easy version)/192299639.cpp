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

 a,b,x,f;
(){
(-1+sqrt(1+8*n))/2;




  FIn;
  // file;
  cin >> t;
  while(t--){
    cin >> n;
    x =solve();
    a=0,b=0;
    f=x;
    if(x*(x+1)/2 < n) f=x+1;
    if(f%4<2){
      a = n- x*(x+1)/2;
    }
    else{b= n- x*(x+1)/2; }
 
    f=x/4;
    a += ((f)*(f+1))*2;
 
    if(x%4>0)f+=1;
    a += (f)*(1+(4*f)-3)/2; 
 
    b += n-a-b;
    cout << a <<' '<< b << endl;
  }
 
  return 0;
}