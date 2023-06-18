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
int n;
pair<int,int> arr[200005];
map<pair<int,int>,int> solved;
void pre();
int dowork(int index, int pos){
    if(solved.count({index,pos})) return solved[{index,pos}];
    if(index==n) return 0;
    int rslt=dowork(index+1,arr[index].first);
 
    //take tree down to right;
    if(index==n-1 || arr[index].second+arr[index].first<arr[index+1].first){
        rslt=max(rslt,1+dowork(index+1,arr[index].second+arr[index].first));
    }
    //take tree down to left;
    if(index==0 || arr[index].first-arr[index].second>pos){
        rslt=max(rslt,1+dowork(index+1,arr[index].first));
    }
    solved[{index,pos}]=rslt;
    return rslt;
}
void solve() {
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i].first >> arr[i].second;
    }
    cout << 1+ dowork(1,arr[0].first);
}
int main() {
    FIn;
   // file;
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