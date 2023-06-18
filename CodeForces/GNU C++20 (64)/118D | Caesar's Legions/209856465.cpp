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
 
const int mod=1e8;
int tc;
int n1,n2,k1,k2;
int kk[3];
int dp[103][103][11][11];
int rec(int tp1,int tp2,int stype, int width ){
    int &ret = dp[tp1][tp2][stype][width];
    if(~ret) return ret;
    if( width > kk[stype] || tp1>n1 || tp2>n2) {ret=0;return 0;}
    if(width<=kk[stype] && tp1==n1 && tp2==n2){ret=1; return ret;}
    // switch bra7tk
    ret=0;
    if(tp1<n1 &&(stype==2 || width<kk[1])){
        ret+=rec(tp1+1,tp2,1,((stype==2)?1:width+1));
    }
    if(tp2<n2 && (stype==1 || width<kk[2])){
        ret+=rec(tp1,tp2+1,2,((stype==2)?width+1:1));
    }
    ret%=mod;
    return ret;
}
void pre();
void solve() {
    cin >> n1 >> n2 >> kk[1] >> kk[2];
    memset(dp,-1,sizeof(dp));
    cout << rec(0,0,0,0);
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