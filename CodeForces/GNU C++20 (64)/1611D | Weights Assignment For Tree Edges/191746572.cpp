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


s;
200005];
200005];
200005];

(){
 n;
    for(int i=1;i<=n;i++){
      dist[i]=-1;
    }
    for(int i=1;i<=n;i++){
      cin >> b[i];
      if(i==b[i]) s=i;
    }
    for(int i=1;i<=n;i++){
      cin >> p[i];
    }
    if(b[p[1]]!=s) {cout << -1 << endl; return ;}
    dist[p[1]]=0;
    for(int i=2;i<=n;i++){
      if(dist[b[p[i]]]==-1){
        cout << -1 << endl;
        return;
      }
      dist[p[i]]=dist[p[i-1]]+1;
    }
    for(int i=1;i<=n;i++){
      cout << dist[i] -dist[b[i]] << ' ';
    }cout << endl;
}
 
int main()
{
  FIn;
  // file;
  cin >> t;
  while(t--){
      solve();
  }
  return 0;
}