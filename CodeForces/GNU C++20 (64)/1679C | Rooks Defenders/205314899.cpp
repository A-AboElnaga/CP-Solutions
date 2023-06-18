<algorithm>
bits/stdc++.h>
<bitset>
<cmath>
<deque>
<functional>
<iomanip>
<iostream>
<map>
<numeric>
<queue>
<set>
<stack>
<string>
<unordered_set>
<utility>
<valarray>
<vector>
namespace std;


<ext/pb_ds/assoc_container.hpp> // Common file
<ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
namespace __gnu_pbds;
class T> using ordered_set = tree<T, null_type , less<T> , rb_tree_tag , tree_order_statistics_node_update> ;


 file                                                                   \
"out.txt", "w", stdout);                                             \
"in.txt", "r", stdin)

FIn                                                                    \
0);                                                                  \
(0);                                                                 \
::sync_with_stdio(false)

 endl '\n'

// https://codeforces.com/problemset/problem/1679/C
 
int t;
int n, q, tp;
int x, y, xx, yy;
map<int, int> row_freq;
map<int, int> col_freq;
ordered_set<int> row,col;
int l, r;
void solve() {
  cin >> n >> q;
  while (q--) {
    cin >> tp;
    cin >> x >> y;
    if (tp == 1) {
      row_freq[x] += 1;
      row.insert(x);
      col_freq[y] += 1;
      col.insert(y);
    } else if (tp == 2) {
      row_freq[x] -= 1;
      col_freq[y] -= 1;
      if (row_freq[x] == 0)
        row.erase(x);
      if (col_freq[y] == 0)
        col.erase(y);
    } else {
      cin >> xx >> yy;
      l=row.order_of_key(x);
      r=row.order_of_key(xx+1);
      if (r - l == xx - x + 1) {
        cout << "YES" << endl;
        continue;
      }
      l=col.order_of_key(y);
      r=col.order_of_key(yy+1);
      if (r - l == yy - y + 1) {
        cout << "YES" << endl;
        continue;
      }
      cout << "NO" << endl;
    }
  }
}
 
int main() {
  FIn;
  //file;
  t = 1;
  // cin >> t;
  while (t--) {
    solve();
  }
}