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

int n,mi,x;
int t_sk1,t_sk2,t_both;
 
void pre(){
 
}
void solve(){
    cin >> n;
    t_sk1=4e6,t_sk2=4e6,t_both=4e6;
 
    for(int i=0;i<n;i++){
        cin >> mi >> x;
        if(x==1){
            t_sk1=min(mi,t_sk1);
        }
        else if(x==10) t_sk2=min(mi,t_sk2);
        else if(x==11) t_both=min(mi,t_both);
    }
    if((t_sk2==4e6 || t_sk1==4e6) && t_both==4e6){
        cout <<  -1 << endl;
    }
    else{
        cout << min(t_both,t_sk1+t_sk2) << endl;
    }
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