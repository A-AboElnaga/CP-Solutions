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


100005];
[100005];
100005],y[100005];

()
INT_MAX;
0){
<< 0 << endl;
    return;
  }
  for(int i=1;i<=n;i++){
    if(degree[i]%2==1){
      rslt=min(arr[i],rslt);
    }
  }
  for(int i=0;i<m;i++){
    if(degree[x[i]]%2==0 && degree[y[i]]%2==0){
        rslt=min(arr[x[i]]+arr[y[i]],rslt);
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
    for(int i=1;i<=n;i++){
      cin >> arr[i];
      degree[i]=0;
    }
    for(int i=0;i<m;i++){
      cin >> x[i] >> y[i];
      degree[x[i]]+=1;
      degree[y[i]]+=1;
    }
    solve();
  }
}