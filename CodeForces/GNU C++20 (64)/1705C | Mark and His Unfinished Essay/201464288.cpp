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




 l,r,k;
 lft[45],rit[45],diff[45];
indr;
(){
 n >> c >> q;
  cin >> s;
  lft[0]=0,rit[0]=n;diff[0]=0;
  for(int i=1;i<=c;i++){
    cin >> l >> r;
    l-=1,r-=1;
    lft[i]=rit[i-1];
    rit[i]=lft[i]+(r-l)+1;
    diff[i]=lft[i]-l;
  }
  for(int i=0;i<q;i++){
    cin >> k;k--;
    for(int j=c;j>=1;j--){
      if(k<lft[j])continue;
      else k-=diff[j];
    }
    cout <<s[k] << endl;
  }
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