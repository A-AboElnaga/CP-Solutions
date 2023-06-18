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

x,l,r;
<int> cardi[300005];
 rslt;
()


 i=0;i<m;i++){
n-1;
l<r){
      rslt+= (long long)(cardi[i][r]-cardi[i][l])*(long long)(r-l);
      r--;l++;
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
    cin >> n >> m;
    for(int i=0;i<m;i++){
      cardi[i].clear();
    }
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        cin >> x;
        cardi[j].push_back(x);
      }
    }
    for(int i=0;i<m;i++){
      sort(cardi[i].begin(),cardi[i].end());
    }
    solve();
  }
}