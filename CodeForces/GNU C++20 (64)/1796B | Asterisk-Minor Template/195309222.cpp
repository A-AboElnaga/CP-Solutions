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

 file                       \
"out.txt", "w", stdout); \
"in.txt", "r", stdin)
 inf unsigned long long32_MAX
FIn    \
0);  \
(0); \
::sync_with_stdio(false)
 endl '\n'




;




  // file;
  cin >> t;
  while(t--){
    cin >> a >> b;
    if(a[0]==b[0]){cout << "Yes" << endl; cout <<a[0] <<  "*" << endl;}
    else if(a[a.size()-1]==b[b.size()-1]){cout <<"Yes" << endl; cout << "*" <<a[a.size()-1] << endl;}
    else{
      flag=0;
      for(int i=0;i<a.size()-1;i++){
        tmp=a[i];
        tmp+=a[i+1];
        for(int j=0;j<b.size()-1;j++){
          if(a[i]==b[j] && a[i+1]==b[j+1]){
            flag=1;
            break;
          }
        }
        if(flag) break;
      }
      if(flag){
        cout << "Yes" << endl;
        cout << "*" << tmp << "*" << endl;
      }
      else cout << "No" << endl;
    }
  }
return 0;
}