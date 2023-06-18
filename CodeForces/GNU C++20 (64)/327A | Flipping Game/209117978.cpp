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
int pref[103];
int rslt,mx_sum,summ,indi,indj;
void pre();
 
void solve(){
    cin >> n;
    pref[0]=0;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        pref[i]=pref[i-1]+a[i];
    }
    //a[i]=1 -> ~a[i]=-1;
    //a[i]=0 -> ~a[1]=1;
    mx_sum=-10;
    summ=0,indi=1,indj=0;int besti=0,bestj=0;
    for(int i=1;i<=n;i++){
        if(a[i]==1)summ+=-1;
        else summ+=1;
        indj=i;
        if(summ>mx_sum){
            mx_sum=summ;
            besti=indi;
            bestj=indj;
        }
        if(summ<0){
            indi=i+1;
            summ=0;
        }
    }
 
    rslt=bestj-besti+1+pref[n]-2*(pref[bestj]-pref[besti-1]);
    cout << rslt << endl;
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