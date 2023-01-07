#include <iostream>
#include <string>
#include <iomanip>
#include <numeric>
#include <cmath>
#include <vector>
#include <algorithm>
#include <set>
#include <utility>


#define FIn   cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false)
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
  int mod = (int)1e9+7;
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

int main()
{
  FIn;
  int T; cin >>T;
	while(T--){
	long n; cin >> n;
  if (n<4){
    cout <<-1 <<endl;
  }
  else{
    for(int i=2; i<=n ;i+=2){
      cout << i << ' ';
    }
    for(int i=1; i<=n;i+=2){
      cout << i;
      if (i <n-1) cout <<' ';
    }
    cout << endl;
  }
  }
return 0;
}