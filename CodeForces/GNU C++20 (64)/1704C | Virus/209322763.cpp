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
int tc;
int n,m;
int x;
int arr[200005];
int rslt;
vector<int> spaces;
 
void pre();
void solve() {
    cin >> n >> m;
    spaces.clear();
    for(int i=0;i<m;i++){
        cin >> arr[i];
    }
    sort(arr,arr+m);
    spaces.push_back(n-arr[m-1]+arr[0]-1);
    for(int i=1;i<m;i++){
        spaces.push_back(arr[i]-(arr[i-1]+1));
    }
    sort(spaces.rbegin(), spaces.rend());
    rslt=0;
    x=0;
    for(int el:spaces){
        if(x>=el) break;
        if(el-x>2){
            rslt+=el-1-x;
            x+=4;
        }
        else{
            rslt+=1;
            break;
        }
    }
    cout << n-rslt << endl;
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