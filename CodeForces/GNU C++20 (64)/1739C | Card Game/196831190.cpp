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

 file                                                                   \
"out.txt", "w", stdout);                                             \
"in.txt", "r", stdin)
 inf unsigned long long32_MAX
FIn                                                                    \
0);                                                                  \
(0);                                                                 \
::sync_with_stdio(false)
 endl '\n'
 long n;
 f[61];
 solved[61];
 m = 998244353;
 rslt,mx;
 inv(int i) {
 i <= 1 ? i : m - (long long)(m/i) * inv(m % i) % m;
}
void Fact(){
  f[0]=1;
  for(long long i=1;i<=60;i++){
    f[i]=(f[i-1]*i)%m;
    solved[i]=-1;
  }
  solved[2]=1;
}
long long nCr(int x,int r){
  return (((f[x]*inv(f[r]))%m*inv(f[x-r]))%m);
}
long long solve(long long x){
  if(solved[x]!=-1) return solved[x];
  long long rs=0;
  long long mxz =nCr(x-2,(x-2)/2)-1;
  rs = nCr(x-1,max(0ll,x/2-1))+(mxz-solve(x-2));
  rs%=m;
  solved[x]=rs;
  return rs;
}
 
 
int main() {
  FIn;
  // file;
  Fact(); 
  cin >> t;
  while(t--){
    cin >> n;
    mx =  nCr(n,n/2)-1;
    rslt = (solve(n)+m)%m;
    cout << rslt << ' ';
    rslt = (mx-rslt+m)%m; 
    cout << rslt << ' ' << 1 << endl;
 
  }
 
 
 return 0;
}