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
bool biSearch(long long x);
bool isPrime(int x);
 
int main()
{
  FIn;
  long long t; cin >>t;
  while(t--)
  {
    int n; char c;  cin >> n >> c;
    vector<int /*zero based indx of poss currnet light*/> curr; 
    vector<int /*zero based indx of green lights*/> g; 
    for(int i = 0 ; i < n ; i++){
      char light; cin >>light;
      if(light == c) curr.emplace_back(i);
      else if(light == 'g'){g.emplace_back(i);}
    }
    int rslt=0;
    if(c=='g') cout << rslt <<endl;
    else {
      for(int i: curr){
        auto it = upper_bound(g.begin(),g.end(),i);
        if(it!=g.end()) rslt=max(rslt,*it-i);
        else{
          rslt=max(rslt,n-i+g[0]);
        }
      }
      cout << rslt <<endl;
    }
 
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
 
bool biSearch(long long x)
{
  long long a = 1, b = sqrt(x);
  while (a <= b)
  {
    long long m = (a + b) / 2;
    long long prod = m * m * m;
    if (prod == x)
      return true;
    if (prod < x)
    {
      a = m + 1;
    }
    else
    {
      b = m - 1;
    }
  }
  return false;
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