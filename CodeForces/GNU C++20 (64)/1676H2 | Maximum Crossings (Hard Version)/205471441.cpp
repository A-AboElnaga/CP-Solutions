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

<ext/pb_ds/assoc_container.hpp> // Common file
<ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
namespace __gnu_pbds;
class T> using ordered_set = tree<T, null_type , less<T> , rb_tree_tag , tree_order_statistics_node_update> ;
// find_by_order((int)k) returns iterator of the kth element
// order_of_key((T)key) returns the number of elements less than this key


 file                                                                   \
"output.txt", "w", stdout);                                             \
"input.txt", "r", stdin)

FIn                                                                    \
0);                                                                  \
(0);                                                                 \
::sync_with_stdio(false)

 endl '\n'

int t;
int n;
ordered_set<pair<int,int>> st;
long long rslt;
int x;
 
void solve(){
    cin >> n;
    st.clear();
    rslt=0;
    for(int i=1;i<=n;i++){
        cin >> x;
        rslt+=(long long)st.size()- (long long)st.order_of_key({x,-1});
        st.insert({x,i});
    }
    cout << rslt << endl;
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