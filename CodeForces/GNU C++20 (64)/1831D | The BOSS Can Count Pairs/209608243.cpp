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
int arr[200005];
long long rslt;
unordered_map<int,int> adj[200005];
void pre();
void solve(){
    cin >> n;
    for(int i=0;i<n;i++)adj[i+1].clear(),cin >> arr[i];
    for(int i=0,x;i<n;i++){
        cin >> x;
        adj[arr[i]][x]++;
    }
    rslt=0;
    int rem,product;
    for(int i=1;i<=n && 1ll*i*i<=2*n;i++){
        for(int j=i;j<=n && 1ll*i*j<=2*n;j++){
                product  = i*j;
            if ( adj[j].size() < adj[i].size())
                swap(i,j);
            for(auto &it  : adj[i])
            {
                rem = product - it.first;
                if ( (i == j) && (rem*2 < product))
                    continue;
                if  ( adj[j].find(rem) != adj[j].end())
                {
                    if ( (i == j) && (rem*2 == product))
                    {
                        rslt += (1ll * it.second * (it.second-1) / 2);
                    }
                    else
                    {
                        rslt += (1ll * it.second * adj[j][rem]);
                    }
                }
            }
            if ( i  > j)
                swap(i,j);
 
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