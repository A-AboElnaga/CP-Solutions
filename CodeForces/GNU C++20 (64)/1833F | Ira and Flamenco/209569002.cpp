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
  freopen("input.txt", "r", stdin);\
  freopen("output.txt", "w", stdout)
 
#define FIn                                                                    \
  cin.tie(0);                                                                  \
  cout.tie(0);                                                                 \
  ios_base::sync_with_stdio(false)
 
#define endl '\n'
 
const int mod=1e9+7;
int tc;
int n,m;
map<int,int> freq;
int val[200005];
int val_freq[200005];
int x;
 
void pre();
long long inv(long long i);
 
void solve() {
    freq.clear();
    cin >> n >> m;
    for(int i =0;i<n;i++){
        cin >> x;
        freq[x]+=1;
    }
    n=freq.size();
    x=0;
    for(auto el:freq){
        val[x++]=el.first;
    }
    sort(val,val+n);
    for(int i=0;i<n;i++){
        val_freq[i]=freq[val[i]];
    }
    if(m>n){cout << 0 << endl; return ;}
    long long product =1;
    long long rslt=0;
    for(int i=0;i<m-1;i++){
        product=(product*val_freq[i])%mod;
    }
    for(int i=m-1;i<n;i++){
        product=(product*val_freq[i])%mod;
        if(val[i]-val[i-(m-1)]<m){
            rslt+=product;
            rslt%=mod;
        }
        product=(product*inv(val_freq[i-m+1]))%mod;
    }
    cout << rslt << endl;
 
}
 
int main() {
    FIn;
    //file;
    //freopen("input.in", "r", stdin);
    tc = 1;
    cin >> tc;
    pre();
    for(int i=1;i<=tc;i++){
        //cout << "Case " << i <<": ";
        solve();
    }
}
 
void pre(){
}
long long inv(long long i) {
    return i <= 1 ? i : mod - (long long)(mod/i) * inv(mod % i) % mod;
}