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



 b,tmp;


<int>rslt;

 update(){
  for(int i=0;i<n;i++){
    if(tmp[i]!=a[i]){
      a[i]='1';
    }
    else a[i]='0';
 
    if(a[i]=='1')r=i;
  }
}
void shift(int k) {
  //right shift  
  if(k<0){
    tmp="";
    for(int i=0;i<abs(k);i++){
      tmp += "0";
    }
    tmp += a.substr(0,n-abs(k));
    update();
  }
  //left shift
  else if(k>0){
    tmp= a.substr(k,n-k);
    for(int i=0;i<abs(k);i++){
      tmp += "0";
    }
    update();
  }
}
 
void solve(){
  //left shifts
  for(int i=l2-1;i>=0;i--){
    if(a[i]!=b[i]){
      rslt.push_back(r-i);
      shift(r-i);
    }
  }
  //right shift
  for(int i=l2+1;i<n;i++){
    if(a[i]!=b[i]){
      rslt.push_back(l2-i);
      shift(l2-i);
    }
  }
}
 
int main() {
  FIn;
  // file;
  cin >> t;
  while (t--) {
    cin >> n;
    cin >> a >> b;
    l=-1, r =-1,l2=-1;
    for (int i = 0; i < n; i++) {
      if (l == -1 && a[i] == '1')
        l = i;
      if(a[i]=='1') r=i;
    }
    for (int i = 0; i < n; i++) {
      if (l2 == -1 && b[i] == '1')
        l2 = i;
    }
    if (l == -1 && l2 != -1) {
      cout << -1 << endl;
    }
    else if(l2==-1 && l!=-1){
      cout << -1 << endl;
    }
    else if(l2==l && l==-1){
      cout << 0 << endl;
    }
    else{
      //place the left most one in its position;
      if(a[l2]!='1'){
          rslt.push_back(l-l2);
          shift(l-l2);
      }
      solve();
      cout << rslt.size()<<endl;
      // cout << a << endl;
      for(auto el:rslt){
        cout << el << ' ';
      }
      if(rslt.size())
        cout << endl;
      rslt.clear();
    }
  }
  return 0;
}