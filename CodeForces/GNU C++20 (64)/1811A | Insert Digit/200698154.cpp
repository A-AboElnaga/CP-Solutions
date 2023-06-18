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
<bitset>
bits/stdc++.h>
namespace std;

 file                       \
"out.txt", "w", stdout); \
"in.txt", "r", stdin)

FIn    \
0);  \
(0); \
::sync_with_stdio(false)
 endl '\n'




()

 n >> d;
 s;

 c:s){
    if(flag){
      cout << c;
      continue;
    }
    if(c-'0'>=d){
      cout << c;
    }
    else{ 
        cout << d <<c;
        flag=1;
    }
  }
  if(flag==0)cout<<d;
  cout << endl;
}
 
int main()
{
  FIn;
  // file;
  // t = 1;
  cin >> t;
  while (t--)
  { 
    solve();
  }
}