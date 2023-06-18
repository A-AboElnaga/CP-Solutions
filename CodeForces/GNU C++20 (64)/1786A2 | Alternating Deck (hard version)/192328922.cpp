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
 aw,ab,bw,bb;
(){
(-1+sqrt(1+8*n))/2;



{
  FIn;
  // file;
  cin >> t;
  while(t--){
    cin >> n;
    x =solve();
    a=0,b=0;
    aw=ab=bw=bb=0;
    f=x;
    if(x*(x+1)/2 < n) f=x+1;
    if(f%4<2){
      a = n- x*(x+1)/2;
      if(a%2!=0){
        if(n%2==1)aw+=1;
        else ab+=1;
      }
    }
    else{
      b= n- x*(x+1)/2;
      if(b%2!=0){
        if(n%2==1)bw+=1;
        else bb+=1;
      }
 
    }
 
    f=x/4; 
    a += ((f)*(f+1))*2;
 
    if(x%4>0)f+=1;
    aw+=f;
    a += (f)*(1+(4*f)-3)/2; 
    b += n-a-b;
 
    f= x/4;
    if(x%4==3)f+=1;
    bb+=f;
    a-=aw;
    b-=bb;
    aw+=a/2;ab=a/2;
    bb+=b/2;bw=b/2;
 
    cout << aw << ' '<< ab << ' ' << bw <<' '<< bb << endl;
  }
 
  return 0;
}