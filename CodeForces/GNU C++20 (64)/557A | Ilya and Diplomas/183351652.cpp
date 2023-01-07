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
  int n; cin >> n;
  int min1,max1; cin >> min1 >> max1;
  int min2,max2; cin >> min2 >> max2;
  int min3,max3; cin >> min3 >> max3;
 
  int r1=0,r2=min2,r3=min3;
  r1= min(max1,n-r2-r3);
  r2= min(max2,n-r1-r3);
  r3= min(max3,n-r1-r2);
 
  cout << r1 <<' ' << r2 <<' ' << r3;
 
 
 
 
  return 0;
}