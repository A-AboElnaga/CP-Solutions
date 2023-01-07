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
  int n,k; cin >> n >>k;
  vector<int> a(n+1);
  int maxa{},maxb{};

  for(int i=1; i<=n;i++){cin >> a[i]; maxa=max(maxa,a[i]);}
  for(int i=1; i<=k;i++){ 
      int x;cin >>x;
      maxb=max(maxb,a[x]);
    }


  if(maxa==maxb){cout<<"Yes"<<endl; return 0;}
  cout << "No" <<endl;

 return 0;
}