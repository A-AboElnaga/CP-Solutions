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
int n,k;
int arr[200005];
int dp[200005][65];
int rslt;
void pre();
void solve() {
    cin >> n >> k;
    for(int i=1;i<=n;i++){
        cin >> arr[i];
        for(int j=0;j<=64;j++){
            dp[i][j]=0;
        }
    }
    for(int i=1;i<=n;i++){
        //start a new seq at index i
        dp[i][arr[i]]++;
        dp[i][arr[i]]%mod;
        for(int j=0;j<=64;j++){
            // previous seq, a[i] not taken
            dp[i][j]+=dp[i-1][j];
            dp[i][j]%=mod;
 
            //previous seq, a[i] taken
            dp[i][j&arr[i]]+=dp[i-1][j];
            dp[i][j&arr[i]]%=mod;
        }
    }
    rslt=0;
    for(int i=0;i<=64;i++){
        if(__popcount(i)==k){
            rslt=(rslt+dp[n][i])%mod;
        }
    }
    cout << rslt << endl;
 
}
int main() {
    FIn;
    //file;
    //freopen("input.in", "r", stdin);
    tc = 1;
    cin >> tc;
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