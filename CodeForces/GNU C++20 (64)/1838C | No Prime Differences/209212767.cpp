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
int a[1003][1003];
void pre();
void solve(){
    cin >> n >> m;
    int x=1;
    for(int i=2;i<=n;i+=2){
        for(int j=1;j<=m;j++){
            a[i][j]=x++;
        }
    }
    for(int i=1;i<=n;i+=2){
        for(int j=1;j<=m;j++){
            a[i][j]=x++;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout << a[i][j] <<' ';
        }cout << endl;
    }
}
 
 
int main() {
    FIn;
//    file;
    tc = 1;
    cin >> tc;
    pre();
    while (tc--) {
        solve();
    }
}
 
void pre(){
 
}