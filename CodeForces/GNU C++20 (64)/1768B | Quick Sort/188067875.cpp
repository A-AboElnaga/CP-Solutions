#include <algorithm>
#include <cmath>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_set>
#include <utility>
#include <valarray>
#include <vector>
#include <sstream>
 
using namespace std;
#define inf unsigned long long32_MAX
#define FIn                                                                    \
  cin.tie(0);                                                                  \
  cout.tie(0);                                                                 \
  ios_base::sync_with_stdio(false);
#define endl '\n'
 
 
int main() {
  FIn;
  // freopen ("out.txt", "w", stdout);
  // freopen ("in.txt", "r", stdin);
  int t; cin >> t;
  while(t--){
   int n,k; cin >> n >> k;
   int count=0,val=1; int x;
   for(int i=1;i<=n;i++){
    cin >> x;
    if(x==val) val+=1;
    else count +=1;
   }
   int rslt = count /k;
   if(count%k!=0) rslt+=1;
   cout << rslt << endl;
  }
  return 0;
}