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
  //freopen ("out.txt", "w", stdout);
  //freopen ("in.txt", "r", stdin);
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    string s; cin >> s;
    int c_l=0,c_r=0;
    for(auto c:s){
      if(c=='L')c_l+=1;
      else c_r+=1;
    }
    if(c_l ==0 || c_r==0 ) cout << -1 << endl;
    else{
       bool flag =1;
       int x=0;
       for(int i=0;i<n-1;i++){
        if(s[i]=='R' && s[i+1]=='L'){
          cout << '0' << endl;
          flag =0;
          break;
        }
        else if(s[i]=='L' && s[i+1]=='R'){
            x =i+1;
        }
       }
       if(flag) cout << x << endl;
    }
    
  }
 
  return 0;
}