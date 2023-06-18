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
vector<pair<int,int>> a;
int b;
void pre();
void solve(){
    cin >> n;
    a.clear();
    for(int i=0;i<n;i++){
        cin >> b;
        if(a.empty()) a.push_back({b,1});
        else if(a[a.size()-1].first==b){
            a[a.size()-1].second+=1;
        }
        else{
            a.push_back({b,1});
        }
 
    }
    if(a[a.size()-1].first==1){cout << "No" << endl; return;}
    cout << "Yes" << endl;
    int c=0;
    for(int i=a.size()-1;i>=0;i--){
        if(a[i].first==0){
            for (int j= 1; j <a[i].second ; ++j) {
                cout << 0 << ' ';
            }
            c+=1;
        }
        else{
            for (int j= 0; j <a[i].second ; ++j) {
                cout << 0 << ' ';
            }
            cout << a[i].second <<' ';
            c-=1;
        }
    }
    if(c) cout << 0;
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
 
void pre(){
 
}