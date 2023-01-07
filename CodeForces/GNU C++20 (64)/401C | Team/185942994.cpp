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
  int n_0,n_1; cin >> n_0 >> n_1;
  if(2*(n_0+1)>=n_1 && n_1+1>=n_0){
    string rslt="";
    while(n_0>n_1/2 && n_1>0){
      rslt+="10";
      n_0-=1;
      n_1-=1;
    }
    while(n_0>0 && n_1>1){
      rslt+="110";
      n_1-=2;
      n_0-=1;
    }
    while(n_1>0){rslt+='1'; n_1-=1;}
    if(n_0>0)rslt= '0'+rslt;
    cout << rslt;
  }
  else cout << -1;
  return 0;
}
                            