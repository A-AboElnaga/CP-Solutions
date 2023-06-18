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

 file                       \
"out.txt", "w", stdout); \
"in.txt", "r", stdin)
 inf unsigned long long32_MAX
FIn    \
0);  \
(0); \
::sync_with_stdio(false)
 endl '\n'



200005];
des;




{
  FIn;
  // file;
  cin >> t;
  while(t--){
    cin >>n;
    asc=1,des=1;
    for(int i=1;i<=n;i++){
      cin >> arr[i];
    }
 
    for(int i=1;i<=n;i++){
      if(arr[i]!=i){
        asc=0;
        break;
      }
    }
    for(int i=n;i>=1;i--){
      if(arr[i]!=i){
        des=0;
        break;
      }
    }
    if(asc || des) cout << "-1" << endl;
    else{
      l=1;r=n;
      lv=1,rv=n;
      while(l<r && (arr[l]==lv ||arr[l]==rv || arr[r]==lv ||arr[r]==rv)){
          if(arr[l]==lv){l++;lv++;}
          if(arr[l]==rv){l++;rv--;}
          if(arr[r]==lv){r--;lv++;}
          if(arr[r]==rv){r--;rv--;}
      }
      if(l<r) cout << l << ' ' << r << endl;
      else cout << -1 << endl;
 
    }
  }
return 0;
}