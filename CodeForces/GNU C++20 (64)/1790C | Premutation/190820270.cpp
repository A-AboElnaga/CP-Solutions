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
<bitset>
bits/stdc++.h>
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


 appeared;
 next_el,prev_el;
 counter[101];
101][101]={{0}};



  // file; 
  cin >> t;
  while(t--){
    appeared.clear();
    cin >> n;
    for(int i=1;i<=n;i++){
      for(int j=1;j<n;j++){
        cin >> arr[i][j];
      }
      counter[arr[i][1]]+=1;
      appeared.insert(arr[i][1]);
    }
    if(counter[*appeared.begin()]>1){
      prev_el = *appeared.begin();
      next_el = *appeared.rbegin();
    }
    else{
      next_el = *appeared.begin();
      prev_el = *appeared.rbegin();
    }
    cout << prev_el << ' ';
    cout << next_el << ' ';
    counter[next_el]=0;
    counter[prev_el]=0;
    for(int j=2;j<n;j++){
      for(int i=2;i<=n;i++){
        if(arr[i][j]!=next_el){
          cout << arr[i][j] << ' ';
          next_el = arr[i][j];
          break;
        }
      }
    } 
    cout << endl;
  }
  return 0;
}