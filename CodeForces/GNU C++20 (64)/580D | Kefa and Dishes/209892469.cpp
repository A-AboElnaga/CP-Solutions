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
int n,m,k;
int x,y,c;
int  more_sat[20][20];
int  base_sat[20];
long long dp[19][(1<<19)-1];
long long rec(int last_dish, int ordered){
    if(__popcount(ordered)>=m)return 0;
    ll &ret = dp[last_dish][ordered];
    if(~ret) return ret;
    int new_order;
    ret=0;
    for(int i=1;i<=n;i++) {
        if((1<<(i-1))&ordered)continue;
        new_order= (ordered | (1<<(i-1)));
        ret = max(0l+base_sat[i] + more_sat[last_dish][i] + rec( i,new_order),
                  ret);
    }
    return ret;
 
}
 
void pre();
void solve() {
    cin >> n >> m >> k;
    memset(dp,-1,sizeof(dp));
    memset(more_sat,0,sizeof(more_sat));
    base_sat[0]=0;
 
    for(int i=1;i<=n;i++){
        cin >> base_sat[i];
    }
    for(int i=0;i<k;i++){
        cin >> x >> y >> c;
        more_sat[x][y]=c;
    }
    cout << rec(0,0) << endl;
 
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