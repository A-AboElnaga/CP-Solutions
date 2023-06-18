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
int n,m;
int l,r,x;
bool seats[100005];
int exact[100005];
int sz;
int rslt;
void pre(){
 
}
void go( int i){
    x=exact[i];
    // current seat + best for left + best for right
    rslt=max(rslt,
             1+ min(x-1,i+l) + min(m-x,sz-i-1+r)
             );
}
 
void solve(){
    cin >> n >> m;
    memset(seats,0,sizeof(seats));
    l=0,r=0,sz=0;
    for(int i=0;i<n;i++){
        cin >> x;
        if(x==-1)l+=1;
        else if(x==-2)r+=1;
        else if(seats[x]==0) exact[sz]=x,seats[x]=1,sz+=1;
    }
    sort(exact,exact+sz);
    rslt=max({l+sz,r+sz});
    rslt=min(rslt,m);
    if(rslt==m){
        cout << m << endl;
        return;
    }
    // exact first
    for(int i=0;i<sz;i++){
        go(i);
    }
 
    cout << rslt << endl;
}
 
 
 
int main() {
    FIn;
    //file;
    t = 1;
    cin >> t;
    pre();
    while (t--) {
        solve();
    }
}