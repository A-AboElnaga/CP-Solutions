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
    int a, b; cin >> a >>b; 
    a = a^b;
    cout << a <<endl;
 
  }
  return 0;
}