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
pair<int,int> item[105];
int dp[(int) 1e5+5];
int w;
int val;
void pre(){


}
void solve() {
    cin >> n >> w;
    for(int i=1;i<=n;i++){
        cin >> item[i].first >> item[i].second;
    }
    memset(dp,0x3f,sizeof(dp));
    dp[0]=0;
    for(int j=1;j<=n;j++){
        for(int i=1e5;i>=0;i--){
            if(i+item[j].second<=1e5){
                dp[i+item[j].second]=min(dp[i+item[j].second],dp[i]+item[j].first);
            }
        }
    }
    for(int i=1e5;i>=0;i--){
        if(dp[i]<=w){
            cout << i << endl;
            return ;
        }
    }
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