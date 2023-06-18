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
int t;
int n;
pair<int,long long> item[105];
long long dp[105][(int)1e5];
int w;
void pre(){

}
long long go(int rem,int next_to_use){
    if(rem<=0 || next_to_use>n) return 0;
    if(dp[next_to_use][rem]!=-1) return dp[next_to_use][rem];
    if(rem-item[next_to_use].first>=0)
        dp[next_to_use][rem]= max(0ll,dp[next_to_use][rem])+ max({item[next_to_use].second+go(rem-item[next_to_use].first,next_to_use+1),
                                                                  go(rem,next_to_use+1)});
    else dp[next_to_use][rem]= max(0ll,dp[next_to_use][rem])+ go(rem,next_to_use+1);
    return dp[next_to_use][rem];
}

void solve() {
    cin >> n >> w;
    for(int i=1;i<=n;i++){
        cin >> item[i].first >> item[i].second;
        for(int j=0;j<=w;j++){
            dp[i][j]=-1;
        }
    }
    go(w,1);
    cout << dp[1][w] << endl;
}
int main() {
    FIn;
    //file;
    t = 1;
    //cin >> t;
    pre();
    while (t--) {
        solve();
    }
}