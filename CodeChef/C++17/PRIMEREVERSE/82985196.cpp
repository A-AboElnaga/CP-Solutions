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
    int n;cin >> n;
    char x;
    int c_0=0,c_1=0;
    for(int i=0;i<n;i++){
      cin >> x;
      if(x-'0'==1) c_1++;
      else c_0++;
    }
    for(int i=0;i<n;i++){
      cin >> x;
      if(x-'0'==1) c_1--;
      else c_0--;
    }
    if(c_0 == 0 && c_1 ==0) cout << "YES" << endl;
    else cout << "NO" << endl;

  }
  return 0;
}