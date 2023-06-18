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
vector<int> pq;
map<int,bool> solved;
void pre(){
 
}
void solve(){
    cin >> n >> m;
    pq.clear();
    solved.clear();
    pq.push_back(n);
    while(!pq.empty()){
        n = *pq.rbegin(), pq.pop_back();
        if(solved[n]) continue;
        if(n==m){cout << "Yes" << endl; return;}
        solved[n]=1;
        if(n%3!=0)continue;
        pq.push_back((n/3)*2);
        pq.push_back(n/3);
    }
    cout << "No" << endl;
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