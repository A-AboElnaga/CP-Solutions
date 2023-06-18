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
arr[1005];



 targets;

rb;
 a){

  s=0; 
  while(tmp>0){
    s+=tmp%10;
    tmp/=10;
  }
  return s;
}
 
int main() {
  FIn;
  // file;
  cin >> t;
  while(t--){
    ra="";rb="";
    cin >> n;
    a= n; sa = to_string(a);
    flag=1;
    for(auto c:sa){
        tmp = (c-'0');
        if((c-'0')%2==0){
          tmp /=2;
          ra+=to_string(tmp);
          rb+=to_string(tmp);
        }
        else{
          tmp/=2;
          if(flag){
            ra+= to_string(tmp);
            rb+= to_string(tmp+1);
          }
          else{
            ra+=to_string(tmp+1);
            rb+=to_string(tmp);
          }
          flag=1-flag;
        }
    }
    a= stoi(ra);
    b= stoi(rb);
    cout << a << ' ' << b << endl;
 
  }
 
 
  return 0;
}