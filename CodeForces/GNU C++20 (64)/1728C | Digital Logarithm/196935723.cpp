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


long long,greater<long long>> stA;
long long,greater<long long>> stB;
string stra;
 stA.begin();
 stB.begin();


void solve(){
  while(!stA.empty()){
    if(*stA.begin()==*stB.begin()){
      stA.erase(stA.begin());
      stB.erase(stB.begin());
    }
    else if(*stA.begin()>*stB.begin()){
        stra = to_string(*stA.begin());
        stA.erase(stA.begin());
        stA.insert(stra.length());
        rslt+=1;
    }
    else{
        stra = to_string(*stB.begin());
        stB.erase(stB.begin());
        stB.insert(stra.length());
        rslt+=1; 
    }
  }
  cout << rslt << endl;
}
 
 
int main()
{
  FIn;
  // file;
  cin >> t;
  while(t--){
    stA.clear();
    stB.clear();
    cin >> n;
    rslt=0;
    for(int i=0;i<n;i++){
      cin >> x;
      stA.insert(x); 
    }
    for(int i=0;i<n;i++){
      cin >> x;
      stB.insert(x);
    }
    solve();
 
  }
  return 0;
}