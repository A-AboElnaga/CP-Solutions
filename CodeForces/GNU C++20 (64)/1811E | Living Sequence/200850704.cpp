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


 num;

 power,rslt;





void solve()
{ 
  cin >> num;
  s.clear();
  while(num){
    c=num%9;
    num/=9;
    if(c>3)c+=1;
    s.push_back('0'+c);
  }
  reverse(s.begin(),s.end());
  cout << s << endl;
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