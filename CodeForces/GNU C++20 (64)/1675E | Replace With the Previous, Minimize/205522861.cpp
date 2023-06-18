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
int n,k;
string s;
char x;
char best;
char to;
void solve(){
 
    cin >> n >> k;
    cin >> s;
    x='a';
    best='a';
    to='a';
    if(k>=25){
        for(auto &el:s){
            el='a';
        }
    }
    else{
        x='a';
        for(auto &el:s){
 
            if(el>x){
                if(el-x>k && k!=0){
                    best=el;
                    to=el-k;
                    el=to;
                    k=0;
                }
                else if(el-x<=k){
                    k-=(el-x);
                    x=el;
                    el='a';
                }
                else{
                    if(el<=best && el>to)el=to;
                }
            }
            else{
                el='a';
            }
        }
    }
    cout << s << endl;
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