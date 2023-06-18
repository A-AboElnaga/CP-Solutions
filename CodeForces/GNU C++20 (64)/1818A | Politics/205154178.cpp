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
<stack>
<string>
<unordered_set>
<utility>
<valarray>
<vector>
namespace std;

 file                                                                   \
"output.txt", "w", stdout);                                             \
"input.txt", "r", stdin)

FIn                                                                    \
0);                                                                  \
(0);                                                                 \
::sync_with_stdio(false)

 endl '\n'



[105];
loc;

<bool> all_members(105);
<bool> case_members(105);
(){
  cin >> n >> k;
  for(int i=0;i<n;i++){
    cin >> arr[i];
    all_members[i]=0;
  }
  rslt=0;
  for(int member=0;member<n;member++){
    case_members=all_members;
    for(int topic=0;topic<k;topic++){
      opin=arr[member][topic];
      for(int other=0;other<n;other++){
          if(arr[other][topic]!=opin){
            case_members[other]=1;
          }
      }
   }
    loc=n;
    for(int i=0;i<n;i++){
      if(case_members[i]==1)loc-=1;
    }
    if(case_members[0]==1)loc=1;
 
    rslt=max(rslt,loc);
  }
  cout << rslt << endl;
}
 
int main() {
  FIn;
  // file;
  // t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
}