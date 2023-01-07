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
    long long n,x,c; cin >> n >> x >> c;
    long long rslt=0;
    for(int i=0; i < n; i++){
        int num; cin >> num;
        if(x-num >c){
          rslt+=x-c;
        }
        else{
          rslt+=num;
        }
    }
    cout << rslt <<endl;
  }
return 0;
}
