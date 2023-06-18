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

int n,m;
priority_queue<int> pq;
void pre(){
 
}
void solve(){
    cin >> n >> m;
    while(!pq.empty()){
        pq.pop();
    }
    pq.push(n);
    while(!pq.empty()){
        n = pq.top(), pq.pop();
        if(n==m){cout << "Yes" << endl; return;}
        if(m>n){cout << "No" << endl; return;}
        if(n%3!=0)continue;
        pq.push((n/3)*2);
        pq.push((n/3));
    }
    cout << "No" << endl; return;
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