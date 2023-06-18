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
void pre();
void solve(){
    cin >> n;
//    if(n==1){
//        cout << 1 << endl;
//        cout << "1 2" << endl;
//        return;
//    }
 
    string tmp="BAN",s="";
    for(int i=0;i<n;i++){
        s+=tmp;
    }
    // send B to end;
    int i=0,j=n-1;
    cout << n/2 + n%2 << endl;
    while(i<j){
        cout << (i*3)+1 << ' ' << (j*3)+3 <<endl;
        swap(s[3*i],s[3*j+2]);
        i++;j--;
    }
    if(n%2==1){
        swap(s[n/2*3],s[n/2*3+2]);
        cout << (n/2)*3+1 << ' ' << (n/2)*3+3 << endl;
    }
//    cout << s << endl;
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
 
void pre(){
 
}