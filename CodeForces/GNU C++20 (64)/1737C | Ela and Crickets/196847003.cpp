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
<bit>

namespace std;

 file                       \
"out.txt", "w", stdout); \
"in.txt", "r", stdin)
 inf unsigned long long32_MAX
FIn    \
0);  \
(0); \
::sync_with_stdio(false)
 endl '\n'

;

int> L[3];

 cornered;
 corner()
{
  cornered = 0;
  sort(L, L + 3);
  if (L[0].first == 1 && L[0].second == 1 &&
      L[1].first == 1 && L[1].second == 2 &&
      L[2].first == 2 && L[2].second == 1)
    cornered = 1;
 
  if (L[0].first == 1 && L[0].second == n - 1 &&
      L[1].first == 1 && L[1].second == n &&
      L[2].first == 2 && L[2].second == n)
    cornered = 2;
 
  if (L[0].first == n - 1 && L[0].second == 1 &&
      L[1].first == n && L[1].second == 1 &&
      L[2].first == n && L[2].second == 2)
    cornered = 3;
 
  if (L[0].first == n - 1 && L[0].second == n &&
      L[1].first == n && L[1].second == n - 1 &&
      L[2].first == n && L[2].second == n)
    cornered = 4;
}
 
int main()
{
  FIn;
  // file;
  cin >> t;
  while (t--)
  {
    cin >> n;
    px = 0;
    py = 0;
    for (int i = 0; i < 3; i++)
    {
      cin >> a >> b;
      L[i] = {a, b};
      px += a % 2;
      py += b % 2;
    }
    cin >> x >> y;
    corner();
    if (px > 1)
      px = 1;
    else
      px = 0;
    if (py > 1)
      py = 1;
    else
      py = 0;
    if ((cornered == 0 && (px == x % 2 || py == y % 2)))
    {
      cout << "Yes" << endl;
    }
    else if ((cornered == 1 && (x == 1 || y == 1)) ||
             (cornered == 2 && (x == 1 || y == n)) ||
             (cornered == 3 && (x == n || y == 1)) ||
             (cornered == 4 && (x == n || y == n)))
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "No" << endl;
    }
    }
    return 0;
  }