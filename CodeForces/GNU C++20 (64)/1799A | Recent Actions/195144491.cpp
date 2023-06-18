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




 counter;
50004];
 st;


  FIn;
  // file;
  cin >> t;
  while(t--){
    cin >> n >> m;
    st.clear();
    for(int i=1;i<=n;i++){
      arr[i]=-1;
    }
    counter = 1;
 
    for(int i=1;i<=m;i++){
      cin >> x;
      if(counter>n+1) continue;
      st.insert(x);
      if(st.size()>=counter){
        arr[n-counter+1]=i;
        counter+=1;
      }
    }
    for(int i=1;i<=n;i++){
      cout << arr[i] <<' ';
    }cout << endl;
  }
  return 0;
}