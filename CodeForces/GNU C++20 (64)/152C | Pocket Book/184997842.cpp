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
 
int mod = 1000000007;
 
int main()
{
  FIn;
  int n,m;
  cin >> n >>m;
  map<int,set<char>> mp;
  for(int i=0;i<n;i++){
    char x;
    for(int j=0;j<m;j++){
      cin >>x;
      mp[j].insert(x);
    }
  }
  long long rslt=1;
  for(auto pos:mp){
    rslt = (rslt%mod)*((long long)pos.second.size()%mod)%mod;
  }
  cout << rslt <<endl;
  return 0;
}