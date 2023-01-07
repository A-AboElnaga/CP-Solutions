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
    int n,k; cin >> n >>k;
    int start=n;
    int end =1;
    int total =n;
    for(int i=1;i<=n;i++){
      if(i%k==0){
        cout << end << ' ';
        end+=1;
      }
      else{
        cout << total << ' ';
        total-=1;
      }
    }
  cout << endl;
  }
  return 0;
}