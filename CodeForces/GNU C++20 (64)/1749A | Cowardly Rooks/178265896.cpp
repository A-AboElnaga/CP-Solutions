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
 
long fac(int x){
  long rslt = 1;
  for(int i=1; i <= x; i++){
    rslt*=i;
  }
  return rslt;
}
 
int main()
{
  FIn;
  int t; cin >> t; 
  while(t--){
    int n,m; cin >> n >>m;
    for(int i=0; i < m ; i ++){
      int x,y; cin >>x >> y;
    }
    if (m<n) cout <<"YES";
    else cout << "NO";
    cout << endl;
  }
  return 0;
}