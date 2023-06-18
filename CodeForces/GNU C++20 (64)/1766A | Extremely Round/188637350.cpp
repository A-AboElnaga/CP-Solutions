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
      string s; cin >> s;
      int rslt = s.size()*9;
      rslt -= 9-(s[0]-'0');
      cout << rslt << endl;
    }
  return 0;
  }