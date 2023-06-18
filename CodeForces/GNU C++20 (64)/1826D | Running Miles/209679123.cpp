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
int n,arr[100005];
int pref[200005];
int suff[200005];
void pre();
void solve() {
    cin >> n;
    for(int i=0;i<n;i++){cin >> arr[i];pref[i]=arr[i]+i,suff[i]=arr[i]-i;}
    for(int i=1;i<n;i++){
        pref[i]=max(pref[i],pref[i-1]);
    }
    for(int i=n-2;i>=0;i--){
        suff[i]=max(suff[i],suff[i+1]);
    }
    int rslt=0;
    for(int i=1;i<n-1;i++){
        rslt=max(rslt,arr[i]+pref[i-1]+suff[i+1]);
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