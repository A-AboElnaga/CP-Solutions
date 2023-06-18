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
int n;
double long arr[3004];
double long dp[3004][3004];
int heads;
void pre(){

}


void solve() {
    cin >> n;
    heads = n/2 +1;
    for(int i=1;i<=n;i++){
        cin >> arr[i];
        dp[i][0]=1;
    }
    dp[0][0]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=heads;j++){
            dp[i][j]= dp[i-1][j -1]*arr[i] + dp[i-1][j]*(1-arr[i]);
        }
    }
    cout << setprecision(10) << fixed;
    cout << dp[n][heads] << endl;
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