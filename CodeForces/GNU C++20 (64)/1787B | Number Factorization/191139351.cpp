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

 n,removed;
int> primes;
 rslt=0;
 product=1;
32];

 factor(){
0){
    product*=2;
    while(n%2==0){
      primes[2]+=1;
      n/=2;
    }
  }
  for(int i=3;i*i<=n;i+=2){
    if(n%i==0){
      product*=i;
      while(n%i==0){
        primes[i]+=1;
        n/=i;
      }
    }
  }
  if(n>1){
    product*=n;
    primes[n]+=1;
  }
}
 
int main()
{
  FIn;
  // file; 
  cin >> t;
  while(t--){
    primes.clear();
    rslt =0; product=1;
    cin >> n;
    for(int i=0;i<32;i++){
      repts[i]=1;
    }
    factor();
    
    for(auto el:primes){
        repts[el.second]*=el.first;
    }
    
    removed = 0;
    for(int i=1;i<32;i++){
      if(repts[i]!=1){
        rslt+= product*(long long) (i-removed);
        removed =i;
        product/=repts[i];
      }
    }
    cout << rslt << endl;
 
  }
  return 0;
}