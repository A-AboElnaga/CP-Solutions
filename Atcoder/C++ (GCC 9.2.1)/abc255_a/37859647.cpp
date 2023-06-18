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
  //file;
  int x,y; cin >> x >> y;
  for(int i=1;i<=2;i++){
    for(int j=1;j<=2;j++){
      int r; cin >> r;
      if(i==x && j ==y) cout << r;
    }
  }
return 0;
}