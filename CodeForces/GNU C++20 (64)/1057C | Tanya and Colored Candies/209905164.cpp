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
int n,s,k;
char x;
pair<int/*val*/,pair<int/*color*/,int/*index*/>> arr[55];
int dp[55][2005][55];
map<char,int> mp;
//RGB;
int rec(int last_taken,int pos, int rem){
    if(rem<=0) return 0;
    if(pos>n) return 1e9;
    int &ret = dp[pos][rem][last_taken];
    if(~ret) return ret;
    ret=1e9;
    //skip next;
    //if pos is valid
    if(arr[pos].second.first!=arr[last_taken].second.first && arr[pos].first>arr[last_taken].first){
        ret=min(ret,
                abs(arr[pos].second.second-arr[last_taken].second.second)+\
                rec(pos,pos+1,rem-arr[pos].first));
    }
    ret=min(ret,rec(last_taken,pos+1,rem));
    return  ret;
}
 
void pre();
void solve() {
    mp['R']=1; mp['G']=2; mp['B']=3;
    cin >> n >> s >> k;
    for(int i=1;i<=n;i++){
        cin >> arr[i].first;
        arr[i].second.second=i;
    }
    for(int i=1;i<=n;i++){
        cin >> x;
        arr[i].second.first=mp[x];
    }
    arr[0]={0,{0,0}};
    memset(dp,-1,sizeof(dp));
    sort(arr+1,arr+n+1);
    int rslt=1e9;
    for(int i=1;i<=n;i++){
        rslt =min(rslt,
                  abs(s-arr[i].second.second)+rec(i,i+1,k-arr[i].first)
                  );
    }
    if(rslt==1e9) rslt=-1;
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