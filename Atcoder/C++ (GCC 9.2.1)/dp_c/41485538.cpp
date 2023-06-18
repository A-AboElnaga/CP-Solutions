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
int n;
int arr[3][(int)1e5+5];
int solved[(int)1e5+5][3];
int rslt=0;
void pre(){

}

int go(int day,int Nvalid){
    if(solved[day][Nvalid]!=-1){
        return solved[day][Nvalid];
    }
    if(day>n)return 0;

    for(int i=0;i<3;i++){
        if(i!=Nvalid){
            solved[day][Nvalid]=max(solved[day][Nvalid],arr[i][day]+go(day+1,i));
        }
    }
    return solved[day][Nvalid];
}

void solve() {
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> arr[0][i] >> arr[1][i] >> arr[2][i];
        solved[i][0]=-1;
        solved[i][1]=-1;
        solved[i][2]=-1;
    }
    for(int i=0;i<3;i++){
        rslt=max(arr[i][1]+go(2,i),rslt);
    }
    cout << rslt << endl;

}
int main() {
    FIn;
    //file;
    t = 1;
    //cin >> t;
    pre();
    while (t--) {
        solve();
    }
}