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
string s;
long long n,rslt;
void pre();
void solve(){
    cin >> s;
    n=s.size();
    rslt=0;
    for(int i=0;i<n;i++){
        if((s[i]-'0')%4==0)rslt+=1;
        if(i && ((s[i-1]-'0')*10+(s[i]-'0'))%4==0)rslt+=i;
    }
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