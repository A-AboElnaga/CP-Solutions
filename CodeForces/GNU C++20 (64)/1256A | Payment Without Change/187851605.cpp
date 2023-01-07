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
  int q; cin >> q;
  while(q--){
    int a,b,n,S; cin >> a >> b >> n >> S;
    if(S/n <=a && S%n <=b){
      cout << "YES" << endl;
    }
    else if(S/n>a && S-(a*n)<=b){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
  }
 
 
  return 0;
}