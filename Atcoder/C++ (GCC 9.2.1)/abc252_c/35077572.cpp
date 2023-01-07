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
  int n,arr[10]={0};
  cin >>n;
  string s1;vector<int> v(n,-1);
  vector<vector<int>> V(10,v);
  for(int string_indx=0;string_indx<n;string_indx++){
    cin >>s1;
    for(int ch_indx=0;ch_indx<10;ch_indx++){
      int indx_num_inString=ch_indx;
      int num = s1[ch_indx]-'0';
      for(int i =0;i<n;i++){
        if(V[num][i]==indx_num_inString)indx_num_inString+=10;
      }
      V[num][string_indx]=indx_num_inString;
      arr[num]=max(arr[num],indx_num_inString);
    }
  }
    int rslt=1000;
      for(int i=0;i<10;i++){ 
        rslt=min(rslt,arr[i]);
    }
    cout <<rslt;
return 0;
}