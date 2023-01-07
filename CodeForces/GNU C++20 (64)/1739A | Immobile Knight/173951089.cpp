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
  ios_base::sync_with_stdio(false)
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
  int mod = (int)1e9 + 7;
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
 
bool isPrime(int n)
{
  if ((n % 2 == 0 && n != 2) || n == 1)
    return false;
  for (int i = 3; i < sqrt(n) + 1; i += 2)
  {
    if (n % i == 0)
      return false;
  }
  return true;
}
 
int main()
{
  FIn;
  int t; cin >> t;
  while(t--){
    int n,m; cin >> n >>m;
    if(min(n,m)>2 && max(n,m)>3){
      cout << "1 1" << endl;}
    else{ cout << (n+1)/2 << ' ' << (m+1)/2 << endl;
    }
  }
  return 0;
}