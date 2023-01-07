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
  long long arr[n+1]={0};
  for(int i=1;i<=n;i++){
    cin >> arr[i];
    arr[i]+=arr[i-1];
  }
  if(arr[n]%3==0){
    long long val= arr[n]/3;
    long long rslt =0;
    int c_val=0;
    for(int i=1;i<n;i++){
        if(arr[i]== 2ll*val){
          rslt+=c_val;
        }
        if(arr[i]==val) c_val+=1;
    }
    cout << rslt;
  }
  else cout << 0;
  return 0;
}
                              