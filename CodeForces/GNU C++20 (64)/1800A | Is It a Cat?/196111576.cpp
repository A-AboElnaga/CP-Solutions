<algorithm>
bits/stdc++.h>
<bitset>
<cmath>
<deque>
<functional>
<iomanip>
<iostream>
<map>
<numeric>
<queue>
<set>
<sstream>
<stack>
<string>
<unordered_set>
<utility>
<valarray>
<vector>
namespace std;

 file                                                                   \
"out.txt", "w", stdout);                                             \
"in.txt", "r", stdin)
 inf unsigned long long32_MAX
FIn                                                                    \
0);                                                                  \
(0);                                                                 \
::sync_with_stdio(false)
 endl '\n'



 {


;
--){

    cin >> n;
    for(int i=0;i<n;i++){
      cin >> x;
      x = tolower(x);
      if(a.empty()||a.back()!=x){
        a.push_back(x);
      }
    }
    if(a=="meow"){
      cout << "YES" << endl;
    }
    else cout << "No" << endl;
  }
 
 
 return 0;
}