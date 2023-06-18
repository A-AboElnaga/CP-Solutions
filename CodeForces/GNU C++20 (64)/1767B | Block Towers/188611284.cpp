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
 
#define file                       \
  freopen("out.txt", "w", stdout); \
  freopen("in.txt", "r", stdin)
#define inf unsigned long long32_MAX
#define FIn    \
  cin.tie(0);  \
  cout.tie(0); \
  ios_base::sync_with_stdio(false)
#define endl '\n'
 
 
int main()
{ 
  FIn; 
  // file;
  int t; cin >> t;
  while(t--){
      int n; cin >>n;
      int rslt=0;
      cin >> rslt;
      int arr[n-1]={0};
      for(int i=0;i<n-1;i++){
        cin >>arr[i]; 
      }
      sort(arr,arr+n-1);
      for(int i=0;i<n-1;i++){
        if(arr[i]>rslt){
          rslt = (rslt+arr[i])/2 + ((rslt+arr[i])%2);
        }
      }
      cout << rslt << endl;
 
  }
return 0;
}