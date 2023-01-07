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
  int m,s; cin >> m >> s;
  int s_m=s;
  if(9*m<s || (s==0 && m>1)) cout << "-1 -1";
  else{
    // mn;
    int c_9m= s_m/9;
    if(m-c_9m<=1){
      if(s_m%9!=0 || s_m==0) cout << s_m%9;
    }
    else{
      c_9m=(s_m-1)/9;
      int n_0=m-c_9m-2;
      cout << '1';
      while(n_0>0){cout <<'0'; n_0-=1;}
      cout << (s_m-1)%9;
    }
    while(c_9m>0){cout <<'9'; c_9m-=1;}
    cout <<' ';
 
    // mx;
    c_9m= s_m/9;
    for(int i=0;i<c_9m; i++) cout << 9;
    if(m-c_9m>0) {cout << s_m%9; m-=1;}
    for(int i=0; i<m-c_9m;i++) cout << 0;    
  }
 
  return 0;
}