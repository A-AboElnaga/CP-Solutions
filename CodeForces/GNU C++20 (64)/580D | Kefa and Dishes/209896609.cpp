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
long long dp[(1<<19)-1][19];
void pre();
void solve() {
    cin >> n >> m >> k;
 
    base_sat[0]=0;
    for(int i=1;i<=n;i++){
        cin >> base_sat[i];
    }
    for(int i=0;i<k;i++){
        cin >> x >> y >> c;
        more_sat[x][y]=c;
    }
    dp[0][0]=0;
    long long rslt=0;
    for(int last_dish=1;last_dish<=n;last_dish++){
        dp[(1<<(last_dish-1))][last_dish]=base_sat[last_dish];
        rslt=max(rslt,0ll+base_sat[last_dish]);
    }
    for(int i=1;i<(1<<n);i++){
        if(__popcount(i)>=m)continue;
        for(int dish=1;dish<=n;dish++){
            if((1<<(dish-1))&i)continue;
            for(int last_dish=1;last_dish<=n;last_dish++){
                if(dish==last_dish || ((1<<(last_dish-1))&i)==0)continue;
                dp[i|(1<<(dish-1))][dish]=max(dp[i|(1<<(dish-1))][dish],base_sat[dish]+more_sat[last_dish][dish]+dp[i][last_dish]);
                rslt=max(rslt,dp[i|(1<<(dish-1))][dish]);
            }
        }
    }
    cout << rslt << endl;
 
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