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
 
 
void Sieve(vector<long>& primes){
  for(long i=2;i<1e6+1;i++){
    if (primes[i]==1){
      for(int j=2*i;j<1e6+1;j+=i){
        primes[j]=0;
      }
    }
  }
}
 
int main()
{  
  FIn;
  int t; cin >> t;
  // vector<long> primes((int)1e6+1,1);
  // primes[0]=0;primes[1]=0;
  // Sieve(primes);
  while(t--){
    long n; cin >> n;
    vector<long> T(n+1);
    for(long i =1; i<=n; i++){
      char x; cin >>x;
      if (x=='1') T[i]=1;
    }
    vector<long> T2=T;
    long long rslt{}; // if (T[1]==0) rslt+=1;
    for(long i=1;i<=n;i++){
        if (T[i]==0){
          for(long j =i; j<=n; j+=i){
            if(T2[j]==0 && T[j]==0) {rslt+=i; T2[j]=1;}
            else if(T[j]==1)break;
           }
        }
    }
    cout << rslt  <<endl;
  }
return 0;
}