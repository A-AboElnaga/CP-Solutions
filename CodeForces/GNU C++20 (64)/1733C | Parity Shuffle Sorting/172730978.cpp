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
 
long long min(long long a,long long b){ if(a<b) return a; return b;}
long long max(long long a,long long b){ if(a<b) return b; return a;}
 
int main()
{  
FIn;
int t,n;
cin >>t;
  while(t--){
    long long n; cin >>n;
    vector<long long> v; v.push_back(0);
    vector<long long> evens;vector<long long> odds;
    cout << (n-1) << endl;
    if(n-1==0) {cin>>n; continue;}
    for(int i=1;i<=n;i++){
       long val; cin >> val;
       v.push_back(val);
       if (val%2 ==0 && (i!=1 && i!=n)) evens.push_back(i);
       else if((i!=1 && i!=n)) odds.push_back(i); 
    }
    cout << 1 << ' ' << n  <<endl;
    if(v[1]%2==0){  //even--> even even
      for(long long x:evens){
          cout << min(x,n) << ' ' << max(x,n) <<endl; 
      }
      for(auto x:odds){
        cout << 1 << ' ' << x <<endl;
      }
    }
    else{  //odd --> odd odd
      for(auto x:evens){
          cout << 1 << ' ' << x <<endl; 
      }
      for(auto x:odds){
        cout << min(x,n) << ' ' << max(x,n) <<endl;
      }
    }
  }
return 0;
}