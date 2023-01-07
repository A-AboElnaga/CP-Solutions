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
  int rslt =0;
  for(int a=1;a<n;a++){
    for(int b=1;b<=n*n-a*a;b++){
      if(a*a + b*b <=n*n){
          int x= sqrt(a*a+b*b);
          if(x*x == a*a+b*b){
            rslt+=1;
          };
      }
      else{break;}
    }
  }
 
  cout << rslt/2;
  return 0;
}