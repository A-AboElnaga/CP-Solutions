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
 
void pre()
{
 
}
bool check(int m){
    int cl,cm,cr;
    cl=a[0]+m;
    cm= upper_bound(a,a+n,cl+m)-a;
    if(cm>=n-1)return true;
    cm= a[cm]+m;
    cr= upper_bound(a,a+n,cm+m)-a;
    if(cr>=n-1) return true;
    cr=a[cr]+m;
    if(cr+m>=a[n-1]) return true;
    return false;
}
int biSearch(int l, int r){
    int m;
    while(l<r){
        m = (l+r)/2;
        if(check(m)){
            r=m;
        }
        else{
            l=m+1;
        }
    }
    return r;
}
void solve(){
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    sort(a,a+n);
    cout << biSearch(0,a[n-1]) << endl;
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