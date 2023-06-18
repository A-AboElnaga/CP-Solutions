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
 
#define file                       \
  freopen("out.txt", "w", stdout); \
  freopen("in.txt", "r", stdin)
#define inf unsigned long long32_MAX
#define FIn    \
  cin.tie(0);  \
  cout.tie(0); \
  ios_base::sync_with_stdio(false)
#define endl '\n'
 
 
int main()
{ 
  FIn; 
  // file;
  int t; cin >> t;
  while(t--){
    int x1,x2,x3,y1,y2,y3;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;
    set<int>x; x.insert(x1); x.insert(x2);x.insert(x3);
    set<int>y; y.insert(y1); y.insert(y2);y.insert(y3);
    if(x.size()==3 || y.size()==3){
      cout << "YES" <<endl;
    }
    else{
      cout << "NO" << endl;
    }
  }
return 0;
}