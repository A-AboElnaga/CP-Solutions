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

int n;
long long rslt;
vector<long long> lvl;
bool calc[1000005];
long long vals[1000005];
void pre(){
    lvl.emplace_back(0);
    for(long long i=1;i<=1000000;i++){
        rslt=*lvl.rbegin();
        if(rslt<1000000){
            lvl.emplace_back(rslt+i);
        }
        else{ return;}
    }
}
long long go(long long x){
    if(calc[x]==1){
        return vals[x];
    }
    calc[x]=1;
    int c_lvl = lower_bound(lvl.begin(), lvl.end(),x)-lvl.begin();
    if(c_lvl==1){
        vals[x]=1;
        return vals[x];
    };
    bool is_left_most=false;
    bool is_right_most=false;
    if(lvl[c_lvl-1]+1==x)is_left_most=true;
    if(lvl[c_lvl]==x)is_right_most=true;
    if(is_left_most){
        vals[x]= (x*x)+go(x-c_lvl+1);
    }
    else if(is_right_most){
        vals[x]= (x*x)+go(x-c_lvl);
    }
    else{
        vals[x]= (x*x)-go(x-c_lvl-(c_lvl-1)+1)+go(x-c_lvl+1)+go(x-c_lvl);
    }
    return vals[x];
}
 
 
void solve(){
    cin >> n;
    rslt=go(n);
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