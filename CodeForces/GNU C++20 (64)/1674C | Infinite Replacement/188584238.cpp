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






 cin >> t;
--){
    string s; cin >> s;
 size_a = s.size();
    cin >> s;
    int size_b = s.size();
    int cont_a=0;
    for(char c: s){
      if(c=='a')cont_a+=1;
    }
    if(cont_a>0 && size_b>1){
        cout << -1 << endl;
    }
    else if(cont_a==1){
      cout << 1 << endl;
    }
    else{
      long long rslt = pow(2ll,size_a);
      cout << rslt  << endl;
    }
  }
return 0;
}