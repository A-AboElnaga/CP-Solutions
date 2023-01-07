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
#include <sstream>


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

double func(double x, double t1, double x1, double t2, double x2)
{
    return  t2-t1+fabs(x-x2)-fabs(x-x1);
}

double zeroFinder(double min, double max, double error, double t1, double x1, double t2, double x2)
{

    if ((max - min) < error)
    {
        return min;
    }
    double x = (max + min) / (double)2.0;
    double val =func(x,t1,x1,t2,x2);
    if ( val < 0)
    {
        min = x;
    }
    else if(val >0)
    {
        max = x;
    }
    else return x;

    return zeroFinder(min, max, error,t1,x1,t2,x2);
}

int biSearch(int x,vector<int> &v){
  int a=0, b=v.size()-1;
  while(a<=b){
    int m =a+(b-a)/2;
    if(x==v[m]){return m;}
    else if(x> v[m]){a=m+1;}
    else b=m-1;
  }
  return -1;
}

int biSearchDec(int x,vector<int> &v){
  int a=0, b=v.size()-1;
  while(a<=b){
    int m =a+(b-a)/2;
    if(x==v[m]){return m;}
    else if(x> v[m]){b=m-1;}
    else a=m+1;
  }
  return -1;
}


int main()
{
  FIn;
  int n; cin >>n;
  std::ostringstream ss;
  ss << std::hex << n;
  string result = ss.str();
  if(result.size()<2) cout <<0;
  for(char c: result){
    if(isalpha(c)){c = toupper(c); cout << c;}
    else cout << (char)c;
  }
  return 0;
}