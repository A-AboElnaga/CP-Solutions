#include <algorithm>
#include <bits/stdc++.h>
#include <bitset>
#include <cmath>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_set>
#include <utility>
#include <valarray>
#include <vector>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
using namespace __gnu_pbds;
template<class T> using ordered_set = tree<T, null_type , less<T> , rb_tree_tag , tree_order_statistics_node_update> ;
// find_by_order((int)k) returns iterator of the kth element
// order_of_key((T)key) returns the number of elements less than this key


#define file                                                                   \
  freopen("output.txt", "w", stdout);                                             \
  freopen("input.txt", "r", stdin)

#define FIn                                                                    \
  cin.tie(0);                                                                  \
  cout.tie(0);                                                                 \
  ios_base::sync_with_stdio(false)

#define endl '\n'
int tc;
int n,m;
int dp[100005];
vector<int> adj[100005];
int x,y;
void pre(){

}
int dfs(int i){
    if(dp[i])return dp[i];
    for(auto el:adj[i]){
            dp[el]=dfs(el);
            dp[i]=max(dp[i],dp[el]+1);
    }
    return dp[i];
}

void solve() {
    cin >> n >> m;
    for(int i=0;i<m;i++){
        cin >> x >> y;
        adj[x].emplace_back(y);
    }
    for(int i=1;i<=n;i++){
        dfs(i);
    }
    cout << *max_element(dp+1,dp+n+1);
}

int main() {
    FIn;
    //file;
    tc = 1;
    //cin >> tc;
    pre();
    while (tc--) {
        solve();
    }
}