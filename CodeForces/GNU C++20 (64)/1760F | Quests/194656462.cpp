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



long long c;
long long loc;
long long arr[200005];


int m) {
  if(m+1 <=d){
    loc = (long long)(d / (m + 1)) * arr[min(n,m + 1)];
    loc += arr[min(n,d % (m + 1))];
  }
  else{
    loc = arr[min(n,d)];
  }
  if (loc >= c)
    return 1;
  if (loc < c)
    return -1;
  return 0;
}
 
void biS() {
  int m;
  int rslt =0;
  while (l <= r) {
    m = l + (r - l) / 2;
    if (check(m) == 1) {
      l = m+1;
      rslt =max(rslt,m);
    } else if (check(m) == -1) {
      r = m - 1;
    }
  }
  l = rslt;
}
 
int main() {
  FIn;
  // file;
  cin >> t;
  while (t--) {
    cin >> n >> c >> d;
    arr[0] = 0;
    for (int i = 1; i <= n; i++) {
      cin >> arr[i];
    }
    sort(arr + 1, arr + n + 1, [](int a, int b) { return a > b; });
    loc = 0;
    loc = arr[1];
    loc *= (unsigned long long)d;
    for (int i = 2; i <= n; i++) {
      arr[i] += arr[i - 1];
    }
 
    if (loc < c) {
      cout << "Impossible" << endl;
      continue;
    }
    if (arr[min(d,n)] >= c) {
      cout << "Infinity" << endl;
      continue;
    }
 
    l = 0;
    r = (int) 1e9;
    biS();
    cout << l << endl;
  }
  return 0;
}