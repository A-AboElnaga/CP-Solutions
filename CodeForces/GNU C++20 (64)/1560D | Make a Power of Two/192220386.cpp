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



 l;
test;

 update(){
0,i=0;
 counter=0;
    for(;i<s.size() && j<test.size();i++){
      if(s[i]==test[j]){
        j++;
      }
      else{
        counter+=1;
      }
    }
    counter+= test.size()-j + s.size()-i;
    rslt = min(rslt,counter);
}
 
int main()
{
  FIn;
  // file;
  // cout << (1<<60) << endl;
  cin >> t;
  while(t--){
    cin >> n;
    s = to_string(n);
    rslt = s.size()+1;
    l =1;
    for(int i=0;i<60;i++){
      test= to_string(l);
      update();
      l *=2;
    }
    cout << rslt << endl;
  }
  return 0;
}