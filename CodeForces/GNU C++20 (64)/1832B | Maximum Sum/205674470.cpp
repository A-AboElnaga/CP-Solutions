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

long long arr[200005];
int n,k;
long long rslt;
void pre(){
 
}
long long rem_big(int i){
    return(arr[n]-arr[n-i]+arr[2*(k-i)]);
}
 
 
void solve(){
    cin >> n >> k;
    for(int i=1;i<=n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n+1);
    for(int i=1;i<=n;i++){
        arr[i]+=arr[i-1];
    }
    rslt=0;
    for(int i=0;i<=k;i++){
        rslt=max(rslt,arr[n]-rem_big(i));
    }
    cout << rslt << endl;
}
 
 
int main() {
    FIn;
    //file;
    t = 1;
    cin >> t;
    pre();
    while (t--) {
        solve();
    }
}