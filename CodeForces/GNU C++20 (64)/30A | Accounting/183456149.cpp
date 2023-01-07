#include <bits/stdc++.h>
 
#define FIn    \
  cin.tie(0);  \
  cout.tie(0); \
  ios_base::sync_with_stdio(false);
#define endl '\n'
using namespace std;
 
auto Fexp(int base, int power)-> long long{
  int r=0;
  int rslt =1;
  int c= base;
  while(power>0){
    r=power%2;
    if(r) rslt*=c;
    power/=2;
    c*=c;
  }
  return rslt;
}
 
auto biSearch( int x,int n)->int{
  int rslt;
  for(int i=1;i<=x;i++){
    rslt = Fexp(i,n);
    if(rslt==x){
      return i;
    }
    else if(rslt>x){
      i =-1;
      return i;
    }
  }
  return -1;
}
 
int main()
{
  FIn;
  int A,B,n; cin >> A>> B >>n;
  if(B==0) cout << 0;
  else if (A==0 || ( A*B<0 && n%2==0)) cout << "No solution";
  else{
    int rslt = biSearch(abs(B)/abs(A),n);
    if(rslt ==-1) cout << "No solution";
    else if(A*B<0) cout << -1*rslt;
    else cout << rslt;
 
  }
  return 0;
}
 