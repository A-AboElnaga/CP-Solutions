#include <algorithm>
#include <cmath>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_set>
#include <utility>
#include <valarray>
#include <vector>
 
using namespace std;
#define inf unsigned long long32_MAX
#define FIn                                                                    \
  cin.tie(0);                                                                  \
  cout.tie(0);                                                                 \
  ios_base::sync_with_stdio(false);
#define endl '\n'
multiset<int> s;
int c;
void prime() {
  int c_copy = c;
  while (c_copy % 2 == 0) {
    s.insert(2);
    c_copy /= 2;
  }
  for (int i = 3; c_copy != 1; i += 2) {
    while (c_copy % i == 0) {
      s.insert(i);
      c_copy /= i;
    }
  }
}
 
int main() {
  FIn;
  // freopen("out.txt", "w", stdout);
  // freopen("in.txt", "r", stdin);
  int t;
  cin >> t;
  while (t--) {
    s.clear();
    int n, x;
    cin >> n >> x;
    if (x == n) {
      cout << x << ' ';
      for (int i = 2; i < n; i++) {
        cout << i << ' ';
      }
      cout << 1;
    } else if (n % x == 0) {
      cout << x << ' ';
      c = n / x;
      prime();
      c = x;
      auto it = s.begin();
      for (int i = 2; i < n; i++) {
 
        if (i % c == 0 && it != s.end()) {
          c *= (*it);
          cout << c << ' ';
          it++;
        } else
          cout << i << ' ';
      }
      cout << 1;
    } else
      cout << -1;
 
    cout << endl;
  }
  return 0;
}