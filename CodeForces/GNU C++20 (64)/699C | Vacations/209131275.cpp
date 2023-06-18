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
int n,a[103];
int rslt;
 
int dp[103][3];
void pre();
 
void solve(){
    cin >> n;
    //0 rest, 1 contest, 2 gym
    rslt=0;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    for(int i=1;i<=n;i++){
        dp[i][0]=max(dp[i-1][2],dp[i-1][1]);
        dp[i][1]=max(dp[i-1][0],dp[i-1][2]);
        dp[i][2]=max(dp[i-1][0],dp[i-1][1]);
 
        if(a[i]&1){
            dp[i][1]++;
        }
        if(a[i]&2){
            dp[i][2]++;
        }
    }
    cout << n - max({dp[n][0],dp[n][1],dp[n][2]}) << endl;
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
 
void pre(){
 
}