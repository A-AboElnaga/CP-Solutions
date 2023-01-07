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
 
long long gcd(long long a, long long b);
long long lcm(long long a, long long b);
unsigned long long FastPow(unsigned long long a, unsigned long long b, unsigned long long c);
bool check(pair<int, int> in_matchings, pair<int, int> x_y);
double func(double x, double t1, double x1, double t2, double x2);
double zeroFinder(double min, double max, double error, double t1, double x1, double t2, double x2);
int biSearch(long long x, vector<long long> &v, int b);
bool isPrime(int x);
 
int main()
{
  FIn;
  long long t;
  cin >> t;
  while (t--)
  {
    long long n;
    cin >> n;
    vector<long long> v(n + 1, 0);
    for (long long i = 1; i <= n; i++)
    {
      cin >> v[i];
      v[i] += v[i - 1];
    }
    long long rslt = n;
    for (long long i = 1; i < n; i++)
    {
      if (v[n] % v[i] == 0)
      {
        long long length{i};
        long long div = v[n] / v[i];
        bool flag = true;
        auto itBeg = next(v.begin(), i);
        for (long long j = 2; j <=div, j * v[i] <= v[n]; j++)
        {
          auto it = find(v.begin(), v.end(), j * v[i]);
          if (it == v.end())
          {
            flag = false;
            break;
          }
          else
          {
            long long dis = distance(itBeg, it);
            length = max(abs(dis), length);
            itBeg = it;
          }
        }
        if (flag)
        {
          rslt = min(rslt, length);
        }
      }
    }
    cout << rslt << endl;
  }
  return 0;
}
 
 
 
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
 
double func(double x, double t1, double x1, double t2, double x2)
{
  return t2 - t1 + fabs(x - x2) - fabs(x - x1);
}
 
double zeroFinder(double min, double max, double error, double t1, double x1, double t2, double x2)
{
 
  if ((max - min) < error)
  {
    return min;
  }
  double x = (max + min) / (double)2.0;
  double val = func(x, t1, x1, t2, x2);
  if (val < 0)
  {
    min = x;
  }
  else if (val > 0)
  {
    max = x;
  }
  else
    return x;
 
  return zeroFinder(min, max, error, t1, x1, t2, x2);
}
 
int biSearch(long long x, vector<long long> &v, int a)
{
  int b = v.size() - 1, prev = -1;
  while (a <= b)
  {
    int m = (a + b) / 2;
    if (v[m] == x)
      return m;
    if (v[m] < x)
    {
      prev = m;
      a = m + 1;
    }
    else
    {
      b = m - 1;
    }
  }
  return prev;
}
 
bool isPrime(int x)
{
  if ((x % 2 == 0 && x != 2) || x < 2)
    return false;
  for (int i = 3; i * i <= x; i += 2)
  {
    if (x % i == 0)
      return false;
  }
  return true;
}