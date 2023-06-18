#include <bits/stdc++.h>
 
using namespace std;
 
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
using namespace __gnu_pbds;
template<class T> using ordered_set = tree<T, null_type , less<T> , rb_tree_tag , tree_order_statistics_node_update> ;
// find_by_order((int)k) returns iterator of the kth element
// order_of_key((T)key) returns the number of elements less than this key
 
#define ll long long
#define file                                                                   \
  freopen("input.txt", "r", stdin);\
  freopen("output.txt", "w", stdout)
 
#define FIn                                                                    \
  cin.tie(0);                                                                  \
  cout.tie(0);                                                                 \
  ios_base::sync_with_stdio(false)
 
#define endl '\n'
 
const int mod=1e9+7;
int tc;
int n, k, d;
int dp[103][103][2];
int rec( int rem_weight, int level, int count_d ){
    if(rem_weight<0) return 0;
    int &ret = dp[rem_weight][level][count_d];
    if(ret!=-1) return ret;
    if(rem_weight==0){
        if(count_d==1) ret=1;
        else ret=0;
        return ret;
    }
    ret=0;
    for(int i=1;i<=k;i++){
        ret+=rec(rem_weight-i,
                 level+1,
                 min(1,count_d+((i>=d)?1:0)) );
        ret%=mod;
    }
    return ret;
}
void pre();
void solve() {
    cin >> n >> k >> d;
    memset(dp,-1,sizeof(dp));
    cout << rec(n,0,0);
}
int main() {
    FIn;
//    file;
//    freopen("key.in", "r", stdin);
//    freopen("key.out", "w", stdout);
    tc = 1;
    //cin >> tc;
    pre();
    for(int i=1;i<=tc;i++){
        //cout << "Case " << i <<": ";
        solve();
    }
}
 
void pre(){
}
long long inv(long long i) {
    return i <= 1 ? i : mod - (long long)(mod/i) * inv(mod % i) % mod;
}