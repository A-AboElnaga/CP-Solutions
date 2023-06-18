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

string s,s_r;
int dp[40004][500];
bool solved[40004][500];
int mod=1e9+7;
vector<int> pil;
int n;
 
 
void pre(){
    for(int i=0;i<40001;i++){
        s= to_string(i);
        s_r=s;
        reverse(s.begin(),s.end());
        if(s==s_r){
            dp[i][pil.size()]=1;
            pil.push_back(i);
        }
    }
}
 
int rec(int val,int i){
        if(val==1 || i==1) return 1;
        else if(val==0) return 1;
        else if(val<0) return 0;
 
        if(solved[val][i]){
            return dp[val][i];
        }
        dp[val][i]=(rec(val,i-1)%mod+rec(val-pil[i],i)%mod)%mod;
        solved[val][i]=1;
    return dp[val][i];
}
 
void solve(){
    cin >> n;
    cout << rec(n,pil.size()-1) << endl;
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