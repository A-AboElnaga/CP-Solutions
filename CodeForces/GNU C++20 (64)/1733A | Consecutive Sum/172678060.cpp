#include <iostream>
#include <string>
#include <iomanip>
#include <numeric>
#include <cmath>
#include <vector>
#include <algorithm>
#include <set>
#define FIn  cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(false);
#define endl '\n'
using namespace std;
 
 
long long gcd(long long a, long long b){
  if (b==0 || a==0 ) return max(a,b);
  return gcd(b,a%b);
} 
long long lcm(long long a, long long b){
  return (abs(a*b)/gcd(a,b));
}
unsigned long long FastPow(unsigned long long a, unsigned long long b, unsigned long long c=1){
  int mod=1;
  while(true){
  if (b == 0) return c;
  int r = b%2 ; b=b/2;
  (r)? c=((a%mod)*(c%mod))%mod: c;
  a=((a%mod)*(a%mod))%mod;
  }
}
 
 
int main()
{  
  FIn;
  int t; cin >> t;
  while(t--){
    int n,k,n_temp; cin >> n >> k; n_temp=n;
    vector <long long> v; long long val; 
    while(n--){    
        cin >> val; v.push_back(val);
    }
    long long rslt=0;val = 0;
    for(int j = 0; j<k;j++){
      val = 0;
      for(int i =j; i <n_temp; i+=k){
          val= max(v[i],val);
      }
      rslt+=val;
    }
    cout << rslt <<endl;
  }
  return 0;
}