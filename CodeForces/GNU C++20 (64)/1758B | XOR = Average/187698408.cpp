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
#include <stack>
#include <string>
#include <unordered_set>
#include <utility>
#include <valarray>
#include <vector>
#include <sstream>
 
using namespace std;
#define inf unsigned long long32_MAX
#define FIn                                                                    \
  cin.tie(0);                                                                  \
  cout.tie(0);                                                                 \
  ios_base::sync_with_stdio(false);
#define endl '\n'
 
 
 
int main() {
  FIn;
  // freopen ("out.txt", "w", stdout);
  // freopen ("in.txt", "r", stdin);
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    if(n&1){
      for(int i=0;i<n;i++)
        cout << 5 << ' ';
      cout << endl; 
    }
    else{
      cout << 1 << ' ' << 3 << ' ';
      for(int i=0;i < n-2;i++)
        cout << 2 << ' ';
      cout << endl;
    }
  }
 
  return 0;
}