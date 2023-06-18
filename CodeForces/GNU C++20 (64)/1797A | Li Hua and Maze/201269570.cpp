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



,x2,y2;

int x,int y){
||x==n) &&(y==1||y==m)){
 2;

||x==n) || ((y==1||y==m))){
    return 3;
  }
  return 4;
}
 
void solve(){
  cin >> n >> m;
  cin >> x1 >> y11 >> x2 >> y2;
  rslt=4;
  rslt=min(check(x1,y11),rslt);
  rslt=min(check(x2,y2),rslt);
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