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


int main()
{
  FIn;
  int t; cin >> t;
  long long mod = 998244353; 
  while(t--){
      int n; cin >> n;
      int rslt = 1;
      int c_1=0;
      vector<long long> evens;
      for(int i=0;i<n;i++){
          long long x; cin >>x;
          if(x==1) c_1+=1;
          else if(x%2==0){
              evens.push_back(x);
          }
          else{
            rslt=(rslt%mod)*(x%mod)%mod;
          }
      }
      sort(evens.begin(),evens.end());
      for(auto it=evens.begin(); it!= evens.end();it++){
        if(c_1>0){
          rslt =(rslt%mod)*((*it+1)%mod)%mod;
          c_1--;
        }
        else{
          rslt =(rslt%mod)*((*it)%mod)%mod;
        }
      }
      cout << rslt <<endl;
  }
return 0;
}
