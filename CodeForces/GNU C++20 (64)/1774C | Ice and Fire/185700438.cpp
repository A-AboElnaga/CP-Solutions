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
    int n; cin >> n;
    int c_0=0,c_1=0;
    char x;
    for(int i=1;i<n;i++){
      cin >> x;
      if(x=='0'){c_0=i;
        cout << c_1+1 << ' ';
      }
      else {c_1=i;
         cout << c_0+1 << ' '; 
      }
    }
    cout << endl;
  }
  return 0;
}