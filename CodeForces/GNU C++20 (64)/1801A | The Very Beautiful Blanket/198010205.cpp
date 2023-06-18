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
x,y,val;
,flag2;
(){

m << endl;

0;i<n;i++){
flag0=0;flag2=0;
 j=0;j<m;j++){
    if(flag0==0){
      flag0=1;
      val = (x<<9)+(y<<2);
      cout << val << ' ';
    }
    else{
      flag0=0;
      val = (x<<9)+(y<<2)+1;
      y+=1;
      cout << val << ' ';
    }
  }cout << endl;
  i++;
  if(i==n)break;
  y=0;
  for(int j=0;j<m;j++){
    if(flag2==0){
      flag2=1;
      val = (x<<9)+(y<<2)+2;
      cout << val << ' ';
    }
    else{
      flag2=0;
      val = (x<<9)+(y<<2)+3;
      y+=1;
      cout << val << ' ';
    }
  }cout << endl;
  x+=1;
}
}
 
int main()
{
  FIn;
  // file;
  cin >> t;
  while(t--){
    cin >> n >> m;
    solve();
  }
  
}