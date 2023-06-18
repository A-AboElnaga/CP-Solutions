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

 string s;

//        R L  U  D
[]={1,-1,0,0};
[]={0,0,1,-1};
char c){
'R'){
dx[0];
      y+=dy[0];
      return;
    }
    if(c=='L'){
      x+=dx[1];
      y+=dy[1];
      return;
    }
    if(c=='U'){
      x+=dx[2];
      y+=dy[2];
      return;
    }
    if(c=='D'){
      x+=dx[3];
      y+=dy[3];
      return;
    }
    
}
 
 
int main()
{
  FIn;
  // file;
  cin >> t;
  bool flag=1;
  while(t--){
    flag=1;
    x=0,y=0;
    cin >> n;
    cin >> s;
    for(auto c:s){
      move(c);
      if(x==1 && y==1){
        cout << "Yes" << endl;
        flag=0;
        break;
      }
    }
    if(flag) cout <<"No" << endl;
 
 
  }
}