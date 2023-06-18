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
p;

200005];

(){
int i=1;i<=p;i++){
=(loc+i)%n;
loc]=1;
vis[0]==1){
        cout << "Yes" << endl;
        return;
      }
      if(loc==x && i%n==0){
        cout << "No" << endl;
        return;
      }
    }
    cout << "No" << endl;
}
int main()
{
  FIn;
  // file;
  cin >> t;
  while(t--){
    cin  >> n >> x >> p;
    for(int i=0;i<n;i++){
      vis[i]=0;
    }
    loc =x;
    solve();
    
  }
  return 0;
}