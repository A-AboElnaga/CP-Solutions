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


100005];
100005];


(){
;

  row1[0]=mx-1;
  val=1;
  for(int i=1;i<n;i+=2){
    row1[i]=val;
    val+=2;
  }
  for(int i=2;i<n;i+=2){
    row1[i]=val;
    val+=2;
  }
 
  row2[n-1]=mx;
  val=2;
  for(int i=0;i<n-1;i+=2){
    row2[i]=val;
    val+=2;
  }
  for(int i=1;i<n-1;i+=2){
    row2[i]=val;
    val+=2;
  }
 
  for(int i=0;i<n;i++){
    cout << row1[i] << ' ';
  }cout << endl;
 
  for(int i=0;i<n;i++){
    cout << row2[i] << ' ';
  }cout << endl;
 
 
 
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