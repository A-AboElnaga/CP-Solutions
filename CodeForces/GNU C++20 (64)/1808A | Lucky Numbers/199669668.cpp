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


mn,mx,loc;
;
 changeto90(){
100;
rslt%100);
;
<=r && rslt>=l){
;
  }
  rslt =r-(r%100);
  rslt+=90;
}
 
void check(int i){
   tmp=to_string(i);
   mx=0,mn=9;
   for(auto c:tmp){
    mx=max(c-'0',mx);
    mn=min(c-'0',mn);
   }
   if(mx-mn>loc){
    loc = mx-mn;
    rslt=i;
   }
}
 
 
void solve()
{
  if(r-l>=100){
    //change last two digits to 90;
    changeto90();
  }
  else{
    rslt=l;loc=0;
    for(int i=l;i<=r;i++){
      check(i);
    }
  }
  cout << rslt << endl;
}
 
int main()
{
  FIn;
  // file;
  // t = 1;
  cin >> t;
  while (t--)
  { 
    cin >> l >> r;
    solve();
  }
}