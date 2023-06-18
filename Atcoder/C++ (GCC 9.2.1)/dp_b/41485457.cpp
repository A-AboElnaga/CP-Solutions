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
int dp[(int)1e5+5];
int arr[(int)1e5+5];
int n,k;
void pre(){

}

void solve(){
    cin >> n >> k;
    for(int i=1;i<=n;i++){
        cin >> arr[i];
        dp[i]=INT_MAX;
    }

    dp[0]=0;
    dp[1]=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            if(i+j>n) break;
            dp[i+j]=min(dp[i+j],dp[i]+abs(arr[i]-arr[i+j]));
        }
    }

    cout << dp[n] << endl;
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