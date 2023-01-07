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
  int t; cin >>t;
  while(t--){
    int n; cin >> n;
    vector<int> b(n);
    vector<bool> v(2*n+1,0);
    int mn=2*n,mx=0;
    for(int i=0; i <n; i++){
        int x; cin >>x;
        b[i]= x; v[x]= 1;
        mn = min(x,mn);
        mx = max(x,mx);
    }
    if (mn!=1 || mx==2*n){
      cout << -1 <<endl;
    }
    else{
      vector<int> rslt;
      for(int num:b){
          rslt.push_back(num);
          for(int j = num; j <=2*n; j++){
              if(v[j]==0){
                v[j]=1;
                rslt.push_back(j);
                break;
              }
          }
      }
      if(rslt.size()!=2*n) cout << -1 <<endl;
      else{
        for(int val:rslt) cout << val << ' ';
        cout << endl;
      }
    }
  }
  return 0;
}
 