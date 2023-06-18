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

x,y,x1,y11;
 matrix[1002][1002];
 rslt;
()

 i=1;i<1001;i++){
int j=1;j<1001;j++){
      matrix[i][j] *=((long long)i*(long long)j);
      matrix[i][j] +=matrix[i][j-1]+matrix[i-1][j]-matrix[i-1][j-1];
    }
  }
  while(q--){
    cin >> x >> y;
    cin >> x1 >> y11;
    rslt = matrix[x1-1][y11-1]-matrix[x][y11-1]-matrix[x1-1][y]+matrix[x][y];
    cout << rslt << endl;
  }
 
}
 
int main()
{
  FIn;
  // file;
  // t = 1;
  cin >> t;
  while (t--)
  { 
    cin >> n >> q;
    for(int i=0;i<1001;i++){
      for(int j=0;j<1001;j++){
        matrix[i][j]=0;
      }
    }
    x1=0,y11=0;
    for(int i=0;i<n;i++){
      cin >> x >> y;
      matrix[x][y]+=1;
    }
    solve();
  }
}