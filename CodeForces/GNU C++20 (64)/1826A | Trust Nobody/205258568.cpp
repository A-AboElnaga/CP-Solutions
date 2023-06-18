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



104];
(){
 n;
(pre,0,sizeof(pre));
int i=1;i<=n;i++){
        cin >> x;
        pre[x]+=1;
    }
    for(int i=1;i<=n;i++){
        pre[i]+=pre[i-1];
    }
    for(int i=0;i<n;i++){
        if(i==n-pre[i] && pre[i]!=0 ){
            cout << n-pre[i] << endl;
            return;
        }
    }
    cout << -1 << endl;
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