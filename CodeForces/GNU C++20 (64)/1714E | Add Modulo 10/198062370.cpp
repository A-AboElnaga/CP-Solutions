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

 st;



(){
==0){
<< "No" << endl;
;
  }
  x=*st.begin()+(*st.begin()%10);
  if(flg5){
    for(auto el:st){
      if(el+(el%10)!=x){
        rslt=0;
        break;
      }
    }
    if(rslt==0){
      cout << "No" << endl;
      return;
    }
    cout << "Yes" << endl;
    return;
  }
 
  odd = ((*st.begin()/10)%2);
  for(auto el:st){
    if((el/10)%2!=odd){
        cout << "No" << endl;
        return;
    }
  }
  cout << "Yes" << endl;
  return;
}
void to(){
  if(flg5){
    x+=(x%10);
    if(x%10!=0){
      rslt=0;
    }
    st.insert(x);
    return;
  }
  while(x%10!=2){
    x+=(x%10);
  }
  st.insert(x);
 
}
 
int main()
{
  FIn;
  // file;
  cin >> t;
  while(t--){
    cin >> n; st.clear();
    rslt=1;
    flg5=0;
    for(int i=0;i<n;i++){
     cin >> x;
     if(x%10==5 || x%10==0){
      flg5=1;
     }
     to();
    }
    solve();
  }
}