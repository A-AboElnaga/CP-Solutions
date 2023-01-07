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
  while(t--){
    string s; cin >>s;
    int min=9; vector<int> ordered;
    for(int i=s.size()-1; i>=0;i--){
      if (s[i]-'0'>min){
        if(s[i]-'0'==9) ordered.push_back(9);
        else ordered.push_back(s[i]-'0'+1);
        }
      else{ordered.push_back(s[i]-'0');min=s[i]-'0';}
    }
    sort(ordered.begin(),ordered.end());
    for(int i =0;i<ordered.size();i++){
      cout << ordered[i];
    }
    cout <<endl;
  }
return 0;
}