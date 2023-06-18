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

200005];
<int> st;
(){
 n >> k;
clear();
int i=1;i<=n;i++) {
        cin >> arr[i];
(abs(arr[i]-i)%k!=0) {
            st.push_back(i);
        }
    }
    if(st.empty()){
        cout << 0 << endl;
    }
    else if(st.size()==2){
        if(abs(arr[st[0]]-st[1])%k==0 && abs(arr[st[1]]-st[0])%k==0){
            cout << 1<< endl;
        }
        else cout << -1 << endl;
    }
    else{
        cout << -1 << endl;
    }
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