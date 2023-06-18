<algorithm>
<cmath>
<deque>
<functional>
<iomanip>
<iostream>
<map>
<numeric>
<queue>
<set>
<stack>
<string>
<unordered_set>
<utility>
<valarray>
<vector>
<sstream>
<bitset>
bits/stdc++.h>
namespace std;

 file                       \
"out.txt", "w", stdout); \
"in.txt", "r", stdin)
 inf unsigned long long32_MAX
FIn    \
0);  \
(0); \
::sync_with_stdio(false)
 endl '\n'
 mod 1000000007
 p   1000000007
 M   1000000007



counter;

 rslt;
unsigned long long F[200005];
 
 
/* Iterative Function to calculate (x^y)%p
in O(log y) */
unsigned long long power(unsigned long long x,int y)
{
 unsigned long long res = 1; // Initialize result
  x= x%p;
  while(y>0){
    if(y&1) rslt =(rslt*x)%p;
    y = y>>1;
    x = (x*x)%p;
  }
  return rslt;
}
 
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
  F[0]=1;
  for(long long i=1;i<200005;i++){
    F[i]=((F[i-1]%mod)*i%mod)%mod;
  }
}
long long inv(long long a){
    long long x,y;
    long long g = GCD(a,mod,x,y);
    return (x%mod + mod)%mod;
}
 
long long nPr (long long n,long long r){
  long long rslt = ((F[n]%mod)*(inv(F[n-r]%mod))%mod);
  return rslt;
}
 
 
int main()
{
  FIn;
  // file;
  cin >> t;
  Fct();
  while(t--){
    cin >> n;
    cin >> x;
    andR=x;
    mn=x;
    counter=1;
    for(int i=1;i<n;i++){
      cin>> x;
      andR&=x;
      if(x<mn){
        counter=1;
        mn=x;
      }
      else if(x==mn)counter+=1;
    }
    if(andR!=mn){cout << 0 << endl; continue;}
    
    rslt = (nPr(counter,2ll)*F[n-2])%mod;
    cout << rslt << endl;
 
  }
 
 
  return 0;
}