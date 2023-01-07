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
 
 
 
 
int main()
{
  FIn;
  // freopen ("out.txt", "w", stdout);
  // freopen ("in.txt", "r", stdin);
  int t; cin >>t;
  while(t--){
    long long rslt=1;
    long long n; cin >> n;
    long long x;
    for(int i=0;i<n;i++){
      cin >> x;
      rslt*=x;
    }
    rslt+= (n-1ll);
    rslt*=2022ll;
    cout << rslt << endl;
  }
  
  return 0;
 
}