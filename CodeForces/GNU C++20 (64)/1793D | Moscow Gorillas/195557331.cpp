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
<sstream>
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
 inf unsigned long long32_MAX
FIn                                                                    \
0);                                                                  \
(0);                                                                 \
::sync_with_stdio(false)
 endl '\n'



200005];
200005];
200005];
200005];

 rslt;
int f;
int c;
long long tmp;
long long a, b;
int main() {
  FIn;
//   file;
  t = 1;
  while (t--) {
    cin >> n;
    for (int i = 1; i <= n; i++) {
      cin >> p[i];
      indp[p[i]] = i;
    }
    for (int i = 1; i <= n; i++) {
      cin >> q[i];
      indq[q[i]] = i;
    }
    rslt = 0;
    // before 1s
    l = 1, r = min(indp[1], indq[1]);
    rslt += (long long)(r - l) * (long long)(r - l + 1) / 2ll;
 
    // after 1s
    l = max(indp[1], indq[1]);
    r = n;
    rslt += (long long)(r - l + 1) * (long long)(r - l) / 2ll;
 
    // between 1s
    l = min(indp[1], indq[1]);
    r = max(indp[1], indq[1]);
    rslt += (long long)(r - l) * (long long)(r - l - 1) / 2ll;
 
    // want 2 to n
    // include 1 in both, done in line 61;
 
    for (f = 1; f <= n; f++) {
      // the new region includes from 1 to f;
      l = min({l, indp[f], indq[f]});
      r = max({r, indp[f], indq[f]});
      if (f == n) {
        rslt += 1;
        continue;
        // check if f+1 is out of region
      } else if ((indp[f + 1] < l || indp[f + 1] > r) &&
                 (indq[f + 1] < l || indq[f + 1] > r)) {
        a = 0, b = 0;
        // * * l r
        if (l > max(indp[f + 1], indq[f + 1])) {
          a = n - r;
          b = l - max(indp[f + 1], indq[f + 1])-1;
        }
        // * l r *
        else if (l < max(indp[f + 1], indq[f + 1]) &&
                 l > min(indp[f + 1], indq[f + 1])) {
          a = max(indp[f + 1], indq[f + 1]) - r - 1;
          b = l - min(indp[f + 1], indq[f + 1]) - 1;
        }
        // l r * *
        else {
          a = min(indp[f + 1], indq[f + 1]) - r - 1;
          b = l - 1;
        }
 
        tmp = (a + 1) * (b + 1);
        rslt += tmp;
      }
    }
    cout << rslt << endl;
  }
  return 0;
}