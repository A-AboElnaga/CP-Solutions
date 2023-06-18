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

d,x;
200005],test[200005];






  cin >> t;
  while(t--){
    rslt=0;
    cin >> n >> m >> d;
    for(int i=1;i<=n;i++){
      cin>>x; indx[x]=i;
    }
    for(int i=1;i<=m;i++){
      cin >> test[i];
    }
    mn=n;
    for(int i=1;i<m;i++){
        if(indx[test[i]]<indx[test[i+1]] && indx[test[i+1]] <= indx[test[i]]+d){
          mn =min({mn,indx[test[i+1]]-indx[test[i]]});
          if(n>d+1){
            mn = min({mn,d+1-(indx[test[i+1]]-indx[test[i]])});
          }
        }
        else{
          mn =0;
          break;
        }
    }
    rslt =max(mn,0);
    cout << rslt << endl;
 
  }
  return 0;
}