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


(){
 n >> k;
int i=0;i<n;i++){
(i*(i-1)+(n-i)*(n-i-1)==2*k){
            cout << "YES" << endl;
            for(int j=0;j<i;j++){
                cout << "1 ";
            }
            for(int j=i;j<n;j++){
                cout << "-1 ";
            }cout << endl;
            return;
        }
    }
    cout << "NO" << endl;
}
int main() {
    FIn;
    //file;
     t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}