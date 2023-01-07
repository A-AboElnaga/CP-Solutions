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
  int n; cin >> n;
  pair<int,int> o_n[n]={};
  // pair<int,int> n_o[n]={};
  int mx=0;
  for(int i=0 ;i < n; i++){
    int o,n; cin  >> o >>n;
    o_n[i]=make_pair(o,n);
    // n_o[i]=make_pair(n,o);
    // mx_o = max(mx_o,o);
    // mx_n= max(mx_n,n);
  } 
  sort(o_n,o_n+n);
  // sort(n_o,n_o+n);
  for(int i=0;i<n;i++){
    if(o_n[i].second<mx){
      mx= o_n[i].first;
    }
    else mx=o_n[i].second;
  }
  cout << mx;
  
 
  return 0;
}
                             