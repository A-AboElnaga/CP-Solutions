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
 
map<long long,long long> mp;
long long dp(long long *arr,int i,long long &n){
  long long r1=0,r2=0;
  if(i>n) return 0;
  if(mp.find(i)!=mp.end()) return mp[i];
 
  if(i+1<=n)
    r1 = arr[i+1]+dp(arr,i+2,n);
 
  if(i+2<=n)
    r2 = arr[i+2]+dp(arr,i+3,n);
 
  r1= max(r1,r2);
  mp[i]=r1;
 
  return r1;
}
 
 
int main()
{
  FIn;
  long long mx= 100005;
  int n; cin >> n;
  long long arr[mx]={};
  mx=0;
  for(int i=1;i<=n;i++){
    long long x; cin >> x;
    arr[x]+=x;
    mx = max(x,mx);
  }
  long long rslt = dp(arr,0,mx);
  cout << rslt;
  return 0;
}