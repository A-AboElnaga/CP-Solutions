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


 l,r,c,x;
 mod =998244353;
 rslt;
 dummy;
(){


  dummy=1;
  while(x>1){
    x/=2;
    c+=1;
    dummy*=2;
  }
  x=dummy;
  // for(int i=1;i<c;i++){
  //   x*=2;
  // }
}
bool solve(){
    if(l*x<=r){
      rslt+=1;
      if(l*(x/2)*3<=r){
          rslt+=c-1;
      }
      rslt = rslt%mod;
      return true;
    }
    return false;
}
void solve2(){
    dummy = r/x;
    if(dummy>=l){
      rslt+=(dummy-l+1);
    }
    dummy=r;
    dummy = dummy<<1;
    dummy/=3; dummy = dummy/x;
    if(dummy>=l){
      rslt= rslt%mod +((dummy-l+1)*(c-1))%mod;
    }
    rslt = rslt%mod;
}
 
int main()
{
  FIn;
  // file;
  cin >> t;
  while(t--){
    rslt=0;c=0;
    cin >> l >> r;
    dolr();
    cout << c << ' ';
    // for(;l<=r;l++){
    //   if(!solve()){
    //     break;
    //   }
    // }
    solve2();
 
    cout << rslt << endl;
  }
return 0;
}