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
int n,x,c,counter;
int rslt;
map<int,int> freq;
void pre()
{
 
}
 
void solve(){
    cin >> n;
    rslt=0;
    c=x=counter=0;
    freq.clear();
    for(int i=0;i<n;i++){
        cin >> c;
        if(c==x){
            counter+=1;
        }
        else{
            freq[x]=max(counter,freq[x]);
            rslt=max(rslt,freq[x]);
            counter=1;
        }
        x=c;
    }
    freq[x]=max(counter,freq[x]);
    rslt=max(rslt,freq[x]);
    counter=0;
    x=0;
    for(int i=0;i<n;i++){
        cin >> c;
        if(c==x){
            counter+=1;
        }
        else{
            rslt=max(rslt,freq[x]+counter);
            counter=1;
        }
        x=c;
    }
    rslt=max(rslt,freq[x]+counter);
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