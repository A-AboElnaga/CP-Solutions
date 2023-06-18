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

nump,x;
<int> arr[500005];
500005];
bool> taken;
 daywinner;
()
clear();
 i=m;i>0;i--){
    daywinner=0;
    for(auto el:arr[i]){
      if(taken[el]==0){
        daywinner=1;
        rslt[i]=el;
      }
      taken[el]=1;
    }
    if(daywinner==0){
      cout << -1 << endl;
      return;
    }
  }
  for(int i=1;i<=m;i++){
    cout << rslt[i] << ' ';
  }cout << endl;
 
}
 
int main()
{
  FIn;
  // file;
  // t = 1;
  cin >> t;
  while (t--)
  {
    cin >> m;
    for(int i=1;i<=m;i++){
      cin >>n;
      arr[i].clear();
      for(int j=1;j<=n;j++){
        cin >> x;
        arr[i].push_back(x);
      }
    }
    solve();
  }
}