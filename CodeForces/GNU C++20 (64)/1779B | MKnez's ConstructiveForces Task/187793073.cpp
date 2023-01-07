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
  //freopen ("out.txt", "w", stdout);
  //freopen ("in.txt", "r", stdin);
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    if(n&1) {
      int a, b;
      a = n/2;
      b =a+1;
      a = 1-a; b=b-1;
      if(a==0 || b ==0)
      cout << "NO" << endl;
      else {
        cout << "YES" << endl;
        int x,y; y = -b; x =-a;
        for(int i=0;i<n-1;i+=2){
          cout << x << ' '  << y << ' ';
        }
        cout << x << endl;
      }
      }
    else{
      cout << "YES" << endl;
      for(int i=0;i<n;i+=2){
            cout << "1 -1 ";
        }
      cout << endl;
    }
  }
  return 0;
}