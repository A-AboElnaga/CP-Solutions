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
    int n; cin >> n;
    vector<int> org(n);
    vector<int> rslt(n);
    cin>>org[0]; rslt[0]=org[0]; bool found = false;
    for(int i =1; i <n;i++){
      cin >> org[i];
      if(!found){
      if(rslt[i-1]-org[i]>=0 && org[i]!=0 ){
        cout << -1 << endl; found =true;
      }
      else{rslt[i]= rslt[i-1]+org[i];}
      }
    }
    if(!found){
    for(int i =0; i < rslt.size()-1;i++){
      cout << rslt[i] << ' ';
    }
    cout << rslt[rslt.size()-1] << endl;
    }
  }
  return 0;
}