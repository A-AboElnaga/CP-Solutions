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
    int n,m; cin >> n >>m;
    long long rslt=0;
    priority_queue<long long,vector<long long>,greater<long long>> a;
    long long mxb =0;
    for(int i=0;i<n;i++){cin >> mxb; a.push(mxb);}
    for(int i=0;i<m;i++) {
      cin >> mxb;
      a.pop();
      a.push(mxb);
    }
    for(int i=0;i<n;i++)
     { 
      rslt+=a.top();
      a.pop();
     }
    cout << rslt << endl;
  }
  return 0;
}