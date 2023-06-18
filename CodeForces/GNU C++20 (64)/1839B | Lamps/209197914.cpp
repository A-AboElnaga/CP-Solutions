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
int n,a,b;
long long rslt;
pair<int,int> all_leds[200005];
void pre();
void solve(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        all_leds[i]={a,-b};
    }
    sort(all_leds,all_leds+n);
    rslt=0;
    int taken=0;
    for(int i=0;i<n;i++){
        int c=i;
        if(all_leds[i].first<=taken)continue;
        for(int j=0;j<all_leds[i].first && all_leds[i+j].first==all_leds[i].first && c<n;j++,c++){
            rslt-=(long long )all_leds[i+j].second;
        }
        taken=all_leds[i].first;
        i=c-1;
    }
 
    cout << rslt << endl;
 
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