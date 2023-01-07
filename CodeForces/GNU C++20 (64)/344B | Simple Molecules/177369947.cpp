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
 
#define FIn    cin.tie(0);  cout.tie(0); ios_base::sync_with_stdio(false);
#define endl '\n'
using namespace std;
 
 
int main()
{
  FIn;
  int a,b,c; cin >> a >> b >> c;
  int x = min (a,b);
  for(int i = 0; i <= x; i++ ){
      int y = b-i;
      int z = a-i;
      if(y+z==c) {cout << i  << ' ' << y << ' ' << z; return 0;}
  }
  cout << "Impossible";
  return 0;
}