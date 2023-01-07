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
 
map<pair<int/*n*/,int/*r*/>,long long/*rslt*/> mp;
 
long long nCr (int n,int r){
  if(r==n || r==0) return 1;
  if(r==1 || r==n-1) return n;
  long long rslt;
  if(mp[make_pair(n,r)]!=0){rslt=mp[make_pair(n,r)];}
  else{ rslt = nCr(n-1,r-1) + nCr(n-1,r);  mp[make_pair(n,r)]=rslt;}
  return rslt;
}
 
 
int main()
{
  FIn;
  int n,m,t; cin >>n>>m>>t;
  long long rslt =nCr(60,30);
  rslt =0;
  for(int i=0;i<=max(0,t-5);i++)
    if(4+i<=n && t-4-i>0 && t-4-i<=m)
      rslt += nCr(n,min(4+i,n-(4+i))) * nCr(m,min(m-(t-4-i),t-4-i)); 
  cout << rslt <<endl;
  return 0;
}