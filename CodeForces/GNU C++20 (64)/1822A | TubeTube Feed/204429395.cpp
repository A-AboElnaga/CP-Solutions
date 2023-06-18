<algorithm>
bits/stdc++.h>
<bitset>
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
namespace std;

 file                                                                   \
"output.txt", "w", stdout);                                             \
"input.txt", "r", stdin)

FIn                                                                    \
0);                                                                  \
(0);                                                                 \
::sync_with_stdio(false)

 endl '\n'


];
];
indx;
(){
 n >> q;
 i = 1; i <=n; i++)

    cin >> a[i];
  }
  for (int i = 1; i <=n; i++)
  {
    cin >> b[i];
  }
  best=0,indx=0;
  for(int i=1;i<=n;i++){
    if(a[i]+i-1<=q){
      if(b[i]>best){
        indx=i;
        best=b[i];
      }
    }
  }
  cout << (indx==0? -1:indx) << endl;
}
 
int main() {
  FIn;
  // file;
  // t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
}