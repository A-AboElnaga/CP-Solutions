<algorithm>
<cmath>
<deque>
<functional>
<iomanip>
<iostream>
<map>
<numeric>
<queue>
<set>
<stack>
<string>
<unordered_set>
<utility>
<valarray>
<vector>
<sstream>

namespace std;

 file                       \
"out.txt", "w", stdout); \
"in.txt", "r", stdin)
 inf unsigned long long32_MAX
FIn    \
0);  \
(0); \
::sync_with_stdio(false)
 endl '\n'
(int a, int b, int c, int d){
&& a < c && d >b && d >c)
true;
false;






  int t; cin >> t;
  while(t--){
    int n,k; cin >> k>> n;
    stack<int> stk;
    for(int i=0;i<k && 1+(((i)*(i+1))/2)<=n;i++){
        stk.push(1+(((i)*(i+1))/2));
    }
    int rem = k - stk.size();
    while(!stk.empty() && n-stk.top()<rem){
      rem+=1;
      stk.pop();
    }
    if(stk.empty())stk.push(1);
    while(stk.size()<k){
      stk.push(stk.top()+1);
    }
    stack<int> rslt;
    while(!stk.empty()){
      rslt.push(stk.top());
      stk.pop();
    }
    while(!rslt.empty()){
      cout << rslt.top() << ' ';
      rslt.pop();
    } cout << endl;
 
  }
return 0;
}