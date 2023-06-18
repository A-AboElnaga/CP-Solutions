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

long long n;
int a[200005],b[200005];
int mod = 1e9+7;
//long long val[200005];
long long rslt;
void pre(){
 
}
void solve(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cin >> b[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    rslt=1;
    for(int i=n-1;i>=0;i--){
        rslt*=(long long)(n-(n-1-i)-(upper_bound(a,a+n,b[i])-a));
        rslt%=mod;
    }
    cout << rslt << endl;
}
 
 
 
int main() {
    FIn;
//    file;
    t = 1;
    cin >> t;
    pre();
    while (t--) {
        solve();
    }
}