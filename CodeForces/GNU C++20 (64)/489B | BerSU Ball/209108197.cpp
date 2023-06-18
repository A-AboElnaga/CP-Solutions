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
int a[103],b[103];
int dp[103][103];
void pre();
int rec(int i,int j){
    if(dp[i][j]!=-1) return dp[i][j];
    if(i>=n || j>=m) dp[i][j]=0;
    else if(abs(a[i]-b[j])<=1){
        dp[i][j] = 1+rec(i+1,j+1);
    }
    else dp[i][j]= max(rec(i+1,j),rec(i,j+1));
    return dp[i][j];
}
void solve(){
    cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    cin >> m;
    for(int i=0;i<m;i++) cin >> b[i];
 
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            dp[i][j]=-1;
        }
    }
    sort(b,b+m);
    cout <<  rec(0,0) << endl;
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