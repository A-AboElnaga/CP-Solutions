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
 'A';
 'R';
  char G = 'G';
  char B = 'B';
  int rslt = 0;
  for(int i=0;i<n;i++){
    if(s[i]==x){
      rslt+=1;
      if(x!=R && (i==n-1 || s[i+1]!=R )){
        s[i]=R;
      } 
      else if(x!=G && (i==n-1 || s[i+1]!=G )){
        s[i]=G;
      } 
      else if(x!=B && (i==n-1 || s[i+1]!=B )){
        s[i]=B;
      } 
    }
    x=s[i];
  }
  cout << rslt  << endl;
  cout << s << endl;
 
  return 0;
}