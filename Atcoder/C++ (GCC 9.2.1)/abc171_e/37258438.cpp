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

int mod = (long long)1e9 + 7; 
map<pair<int,int>,long long> m;

long long nCr (long long n,long long r){
  if(r==n || r==0) return 1;
  if(r==1 || r==n-1) return n;
  long long rslt;
  if(m[make_pair(n,r)]!=0) return m[make_pair(n,r)];
  rslt = (nCr(n-1,r-1)%mod) + (nCr(n-1,r)%mod)%mod;
  m[make_pair(n,r)]=rslt;
  return rslt;
}


int main()
{
  FIn;
  int n,b; cin >> n >> b;
  int r= n-b;
  long long rslt;
  for(int i=1;i<=b;i++){
    if(i>r+1) cout << 0 <<endl;
    else{
      rslt = (nCr(r+1,i)%mod)*(nCr(b-1,i-1)%mod)%mod;
      cout << rslt << endl;
    }
  }
  return 0;
}