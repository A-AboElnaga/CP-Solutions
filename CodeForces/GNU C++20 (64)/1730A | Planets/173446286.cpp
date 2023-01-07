#include <iostream>
#include <string>
#include <iomanip>
#include <numeric>
#include <cmath>
#include <vector>
#include <algorithm>
#include <set>
#include <valarray>
#include <map>
 
#define FIn    \
  cin.tie(0);  \
  cout.tie(0); \
  ios_base::sync_with_stdio(false);
#define endl '\n'
using namespace std;
 
long long gcd(long long a, long long b)
{
  if (b == 0 || a == 0)
    return max(a, b);
  return gcd(b, a % b);
}
long long lcm(long long a, long long b)
{
  return (abs(a * b) / gcd(a, b));
}
unsigned long long FastPow(unsigned long long a, unsigned long long b, unsigned long long c = 1)
{
  int mod = 1;
  while (true)
  {
    if (b == 0)
      return c;
    int r = b % 2;
    b = b / 2;
    (r) ? c = ((a % mod) * (c % mod)) % mod : c;
    a = ((a % mod) * (a % mod)) % mod;
  }
}
bool check(pair<int, int> in_matchings, pair<int, int> x_y)
{
  if (x_y.second <= in_matchings.first)
    return false;
  if (x_y.first >= in_matchings.second)
    return false;
  return true;
}
 
 
int main()
{
  FIn;
  int t; cin >> t;
  while(t--){
  int n,c; cin >> n >> c;
  map<int,int> Counter; 
  set<int> Orbits;
  for(int i=0;i<n;i++){
    int x; cin >>x;
    Counter[x]+=1;
    Orbits.insert(x);
  }
  long rslt{};
  for(auto orbit: Orbits){
    if(Counter[orbit]>c) rslt+=c;
    else {rslt+=Counter[orbit];}
  }
  cout << rslt <<endl;
  }
  return 0;
}