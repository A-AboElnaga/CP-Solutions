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



;

const vector<int> &a, const vector<int> &b){
1;
res<=m && a[res]==b[res]){
++;
  }
  return res-1;
}
 
int main()
{
  FIn;
  // file;
  cin >> t;
  while(t--){
    cin >> n >> m;
    vector<vector<int>> a(n+1,vector<int>(m+1));
    vector<vector<int>> b(n+1,vector<int>(m+1));
    for(int i=1;i<=n;i++){
      for(int j=1;j<=m;j++){
        cin >> a[i][j];
        b[i][a[i][j]]=j;
      }
      b[i][0]=0;
      a[i][0]=0;
    }
    sort(b.begin(),b.end());
    for(int i=1;i<=n;i++){
      int j= lower_bound(b.begin(),b.end(),a[i])-b.begin();
      rslt =0;
      if(j>0) rslt = max(rslt,get(a[i],b[j-1]));
      if(j<=n) rslt = max(rslt,get(a[i],b[j]));
      cout << rslt << ' ';
    } cout << endl;
  }
 
  return 0;
}