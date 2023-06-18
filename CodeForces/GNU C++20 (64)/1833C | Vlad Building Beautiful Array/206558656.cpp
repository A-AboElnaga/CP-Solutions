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
int a[200005];
int lo,le;
bool r_e,r_o;
void pre(){
 
}
void solve() {
    cin >> n;
    lo=INT_MAX,le=INT_MAX;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i]%2==0){
            le=min(a[i],le);
        }
        else lo=min(a[i],lo);
    }
    r_e=1;
    //even?
    for(int i=0;i<n;i++){
        //odd and cant be even
        if(a[i]%2!=0 && a[i]-lo<=0){
            r_e=0;
            break;
        }
    }
    r_o=1;
    for(int i=0;i<n;i++){
        //even and cant be odd
        if(a[i]%2==0 && a[i]-lo<=0){
            r_o=0;
            break;
        }
    }
    if(r_e || r_o) cout << "Yes";
    else cout << "No";
    cout << endl;
 
}
 
int main() {
    FIn;
    //file;
    tc = 1;
    cin >> tc;
    pre();
    while (tc--) {
        solve();
    }
}