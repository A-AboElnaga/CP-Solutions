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
long long mod = 998244353;
const int MAX = 10005;
long long F[MAX]={1};
 
long long GCD(long long a,long long b, long long &x, long long &y){
    if(a==0){
      x=0,y=1;
      return b;
    }
    long long x1,y1;
    long long gcd = GCD(b%a,a,x1,y1);
    x = y1 - (b/a)*x1;
    y = x1;
 
    return gcd;
 
}
 
void Fct(){
  for(long long i=1;i<MAX;i++){
    F[i]=((F[i-1]%mod)*i%mod)%mod;
  }
}
long long inv(long long a){
    long long x,y;
    long long g = GCD(a,mod,x,y);
    return (x%mod + mod)%mod;
}
 
long long nCr (long long n,long long r){
  long long rslt = ((F[n]%mod)*((inv(F[n-r])%mod)*(inv(F[r])%mod)%mod))%mod;
  return rslt;
}
 
int main()
{
  FIn;
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    int mn=70; int sum=0;
    int x; 
    for(int i=0; i <n;i++){
      cin >> x;int loc=0;bool flag=x%2;
      sum+=x;
      while(loc<mn && flag==x%2 && x!=0){
        loc+=1;
        x/=2;
      }
      if(x%2!=flag){
        mn=min(mn,loc);
      }
    }
    if(sum%2==0) cout << 0 << endl;
    else cout << mn << endl;
  }
  return 0;
}