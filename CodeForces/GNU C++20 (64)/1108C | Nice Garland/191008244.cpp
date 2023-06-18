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




// file; 
 cin >> n;
; cin >> s;
,bool> mp; //R G B taken?
  string  arr[]={"GBR","GRB","RGB","RBG","BGR","BRG"};
  int count =0;
  int loc=0, rslt=200005;
  string rep="";
  for(auto pos:arr){
    loc=0;
    for(int i=0;i<n;i++){
      if(s[i]!=pos[i%3]){
        loc+=1;
      }
    }
    if(rslt>loc){
      rslt = loc;
      rep=pos;
    }
  }
  cout << rslt << endl;
  for(int i=0;i<n;i++){
    cout << rep[i%3];
  }
  return 0;
}