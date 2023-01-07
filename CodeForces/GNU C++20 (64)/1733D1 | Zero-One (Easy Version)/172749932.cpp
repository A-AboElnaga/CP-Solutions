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
int t;
cin >>t;
while(t--){
  long long n,x,y; cin >>n >> x >>y;
  string s1,s2; cin >> s1 >> s2;
  long long count_diff{}; vector<long long> indx_diff;
  for(int i = 0; i <n; i++){
    if(s1[i]!=s2[i])
      {count_diff+=1;
       indx_diff.push_back(i);
      }   
  }
  if (count_diff %2 !=0) {cout << -1 << endl; continue;}
  if (count_diff ==0) {cout << 0 << endl; continue;}
  sort(indx_diff.begin(),indx_diff.end());
  if( count_diff==2 && indx_diff[count_diff/2-1]+1 == indx_diff[count_diff/2]) {cout << min(x,2*y) <<endl; continue;}
  cout << (count_diff/2)*y << endl;
}
return 0;
}