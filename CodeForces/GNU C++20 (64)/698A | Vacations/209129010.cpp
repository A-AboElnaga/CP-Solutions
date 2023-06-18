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
 
map<pair<int,int>,int> memo;
void pre();
int rec(int i,int x){
    if(memo.count({i,x}))return memo[{i,x}];
    if(i>=n) return 0;
    if(a[i]==0 || a[i]==x) memo[{i,x}]= 1+rec(i+1,0);
    else if(a[i]==3 && x!=0) memo[{i,x}] =  rec(i+1,3-x);
    else if(a[i]==3) memo[{i,x}]= min(rec(i+1,1),rec(i+1,2));
    else memo[{i,x}]= rec(i+1,a[i]);
 
    return memo[{i,x}];
}
 
void solve(){
    cin >> n;
    //0 rest, 1 contest, 2 gym
    rslt=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << rec(0,0);
 
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