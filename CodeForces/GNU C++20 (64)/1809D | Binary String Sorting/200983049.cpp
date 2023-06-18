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

FIn    \
0);  \
(0); \
::sync_with_stdio(false)
 endl '\n'



 rslt,cur;
 e12 =1e12;

(){
1e18;

; n=s.size();
  if(n==1){
    cout << 0 << endl;
    return;
  }
  c0=0,c1=count(s.begin(),s.end(),'1');
  for(int i=0;i<n-1;i++){
    c0+=s[i]=='0';c1-=s[i]=='1';
    k=c0+c1+(s[i]=='1')+(s[i+1]=='0');
    cur=(long long)(n-k)*(e12+1ll);//other elements removed;
    if(s[i]>s[i+1])cur+=e12;//inver
    rslt=min(rslt,cur);
  }
  cout << rslt << endl;
}
 
int main()
{
  FIn;
  // file;
  // t = 1;
  cin >> t;
  while(t--){
    solve();
  }
}