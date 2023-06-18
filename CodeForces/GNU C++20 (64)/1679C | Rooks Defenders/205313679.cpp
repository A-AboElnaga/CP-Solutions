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

 file                                                                   \
"out.txt", "w", stdout);                                             \
"in.txt", "r", stdin)

FIn                                                                    \
0);                                                                  \
(0);                                                                 \
::sync_with_stdio(false)

 endl '\n'

// https://codeforces.com/problemset/problem/1679/C


 tp;
 xx, yy;
 row;
 col;
 row_freq[100005];
int col_freq[100005];
auto l = row.begin();
 
void solve() {
  cin >> n >> q;
  for (int i = 1; i <= n; i++) {
    row.insert(i);
    col.insert(i);
  }
  while (q--) {
    cin >> tp;
    cin >> x >> y;
    if (tp == 1) {
      if (row_freq[x] == 0)
        row.erase(x);
      row_freq[x] += 1;
      if (col_freq[y] == 0)
        col.erase(y);
      col_freq[y] += 1;
    } else if (tp == 2) {
      row_freq[x] -= 1;
      col_freq[y] -= 1;
      if (row_freq[x] == 0)
        row.emplace(x);
      if (col_freq[y] == 0)
        col.emplace(y);
    } else {
      cin >> xx >> yy;
      l = row.lower_bound(x);
 
      if (l == row.end() || *l > xx) {
        cout << "YES" << endl;
        continue;
      }
      l = col.lower_bound(y);
      if (l == col.end() || *l > yy) {
        cout << "YES" << endl;
        continue;
      }
      cout << "NO" << endl;
    }
  }
}
 
int main() {
  FIn;
  // file;
  t = 1;
  // cin >> t;
  while (t--) {
    solve();
  }
}