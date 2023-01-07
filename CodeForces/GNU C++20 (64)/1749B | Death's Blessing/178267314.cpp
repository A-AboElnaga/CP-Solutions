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
    long long rslt = 0; 
    long long mx =0; 
    int n; cin >> n;
    for(int i=0; i < n ; i++){
      long long x; cin >> x;
      rslt+=x;
    }
    for(int i=0; i < n ; i++){
      long long x; cin >> x;
      rslt+=x;
      mx= max(mx,x);
    }
    cout << rslt-mx <<endl;
  }
  return 0;
}