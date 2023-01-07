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
    int n,m; cin >> n>> m;
    int mx=0; int x=0;
    for(int i=1;i<=n;i++){
      cin >> x;
      if(x!=i) mx =i;
    }
    long double ntVal=1;
    long double rslt= 0;
    //vector<double long> valid;
    for(int i=0;i<m;i++){
      int len; long double prop;
      cin >> len; cin >> prop;
      if(len>=mx) {
          if (prop==1) rslt=1;
          else
            rslt+=ntVal*prop;
          ntVal*=(1 - prop);
      } 
    }
    cout << setprecision(6)<< fixed;
    if (mx==0) rslt =1;
    cout << rslt;
    cout << endl;
 
 
  }
  return 0;
}