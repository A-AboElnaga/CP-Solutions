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



1005];



(){
 n;
    memset(lr,0,4*(n+2));
    rslt=0;
    for(int i=1;i<=n;i++){
        cin >> x;
        lr[x]+=1;
            for(int j=x;j<=n;j++){
                rslt+=lr[j];
            }
        rslt-=1;
    }
    cout << rslt << endl;
}
 
 
int main() {
    FIn;
//    file;
    t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}