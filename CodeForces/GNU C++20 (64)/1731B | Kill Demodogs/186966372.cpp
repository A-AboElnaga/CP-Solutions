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
#include <utility>
 
using namespace std;
 
#define FIn   cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false);
#define endl '\n'
#define mod   %1000000007ll
 
 
 
 
int main()
{
  FIn;
  // freopen ("out.txt", "w", stdout);
  // freopen ("in.txt", "r", stdin);
  int t; cin >>t;
  while(t--){
    unsigned long long n; cin >> n;
    unsigned long long rslt= (((n mod)*(n+1)mod)mod*(4*n-1)mod)mod;
    rslt = (337 * rslt)mod;
 
    cout << rslt << endl;
  }
  
  return 0;
 
}