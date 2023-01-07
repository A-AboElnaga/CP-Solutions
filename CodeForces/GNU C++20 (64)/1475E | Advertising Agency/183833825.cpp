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
 
long long mod= 1e9+7;
map<pair<int,int>,int> m;
auto nCr(long long n, long long r)-> long long{
  if(r==0 || r==n) return 1;
  if(m.find(make_pair(n,r))!=m.end()) return m[make_pair(n,r)];
  long long rslt= (nCr(n-1,r-1)%mod +nCr(n-1,r)%mod)%mod;
  m[make_pair(n,r)]=rslt;
  return rslt;
}
 
int main()
{
  FIn; 
int t; cin >> t; 
  while(t--){
    int n,k; cin >> n >> k;
    map<int,int> m;
    for(int i =0; i < n; i++){
      int x; cin >> x;
      m[x]+=1;
    }
    int rslt=0;
    for(auto it=m.rbegin();it!=m.rend();it++){
      if(k==it->second){cout << 1 << endl; break;}
      else if(k<it->second){
        long long rslt =nCr((long long) it->second, (long long) k);
        cout << rslt <<endl;
        break;
      }
      else{
        k-=it->second;
      }
    }
  }
  return 0;
}