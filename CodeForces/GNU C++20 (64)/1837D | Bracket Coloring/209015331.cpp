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
int  n;
string s;
stack<int> stk_org;
stack<int> stk_rev;
int rslt[200005];
void pre()
{
 
}
void solve() {
    cin >> n;
    cin >> s;
    if (count(s.begin(), s.end(), ')') != count(s.begin(), s.end(), '(')) {
        cout << -1 << endl;
        return;
    }
    int c = 0;
    int c1 = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '(') {
            if (!stk_rev.empty()) {
                c=1;
                rslt[i] = 1;
                rslt[stk_rev.top()] = 1;
                stk_rev.pop();
            } else {
                stk_org.push(i);
            }
        } else if (s[i] == ')') {
            if (!stk_org.empty()) {
                c1 = 1;
                rslt[i] = 2;
                rslt[stk_org.top()] = 2;
                stk_org.pop();
            } else {
                stk_rev.push(i);
            }
        }
    }
    if (stk_org.empty() && stk_rev.empty()) {
        cout << c + c1 << endl;
        for (int i = 0; i < n; i++) {
            cout << min(rslt[i],c+c1) << ' ';
        }
        cout << endl;
    }
    while (!stk_org.empty())stk_org.pop();
    while (!stk_rev.empty())stk_rev.pop();
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