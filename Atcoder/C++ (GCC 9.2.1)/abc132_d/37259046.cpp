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


long long nCr (long long n,long long r){
  if(r==n || r==0) return 1;
  if(r==1 || r==n-1) return n;
  long long rslt;
  rslt = nCr(n-1,r-1) + nCr(n-1,r);
  return rslt;
}


int main()
{
  FIn;
  int n; cin >>n;
  int xOr=0;
  vector<int>v(n);
  int x;
  for(int i=0;i<n;i++){
    cin >> x;
    xOr = x^xOr;
    v[i]=x;
  }
  for(int val:v){
    val = val^xOr;
    cout << val  << ' ';
  }
  return 0;
}