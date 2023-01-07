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
 
long long solve(long long l, long long r, long long y){
  long long rslt=0;
  for(int i=l;i*i<=y && i<=r;i++){
    if(y%i==0){
      int t=y/i;
      if(t<=r && t>=l && gcd(t,i)==1){
        if(i!=t)
        rslt+=2;
        else rslt+=1;
      }
    }
  }
  return rslt;
}
 
 
int main()
{
  FIn;
  long long l,r,x,y; cin >> l >> r >> x >>y;
  long long rslt =0;
  l = ceil(l/(double)x); r= floor(r/(double)x);
  if(y%x==0)
    { y=y/x;
    rslt = solve(l,r,y);
    }
  else{rslt=0;}  
  cout << rslt<<endl;
  return 0;
}