#include <iostream>
#include <string>
#include <iomanip>
#include <numeric>
#include <cmath>
#include <vector>
#include <algorithm>
#include <set>
#include <valarray>
#include <queue>
#include <unordered_set>
#include <map>
#include <stack>
#include <deque>
 
#define FIn    \
  cin.tie(0);  \
  cout.tie(0); \
  ios_base::sync_with_stdio(false);
#define endl '\n'
using namespace std;
 
 
 
int main()
{
  FIn;
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    int x =4*n;
    for(int i=0;i<n; i++){
      cout << x << ' ';
      x-=2;
    }
    cout << endl;
  }
  return 0;
}
 
 
 