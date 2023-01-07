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
  while(t--){
    long long n; cin >> n;
    long long sm_arr[n]={};
    long long sm=0;
    long long mx=0,mn=(long long)1e9;
    long long x;
    set<int> indx;
    for(int i=0;i<n;i++){
      cin >> x;
      mn = min(x,mn);
      if(x>mx){
        mx=x;
        indx.clear();
        indx.insert(i);
      }
      else if(x==mx && indx.size()<3){
        indx.insert(i);
      }
      sm+=x;
      sm_arr[i]=sm;
    }
    long long rslt =0;
    if(indx.size()>=3) rslt = mx*n;
    else if(n==3){
      rslt = max({sm_arr[0]*n,(sm_arr[2]-sm_arr[1])*n,(mx-mn)*n});
    }
    else{
      rslt = (mx-mn)*n;
      for(long long in:indx){
        if(in>=2 || in <n-2){
          rslt = mx*n;
          break;
        }
      }
    }
    rslt =max(rslt,sm);
    cout << rslt <<endl;
  }
  return 0;
}