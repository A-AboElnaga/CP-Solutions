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
      string s; cin >>s;
      bool flag =1;
      for(int i=0;i<n;i++){
        string test = s.substr(i,2);
        for(int j=i+2;j<n;j++){
          if(test==s.substr(j,2)){
            cout << "YES" << endl;
            flag =0;
            goto Here;
          }
        }
      }
      Here:
        if(flag) cout << "NO" << endl;
        continue;
 
    }
  return 0;
  }