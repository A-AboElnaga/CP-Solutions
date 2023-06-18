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

 arr[400005];
 rslt,rslt1,rslt2,mx;
(){
1){
      rslt = abs(arr[0]-arr[1]);

if(n==2){
      rslt =min(rslt,rslt2);
    }
 
    if(n%2==1){
      cout << rslt << endl;
    }
    else{
      rslt1-=abs(mx+1);
      rslt1+=abs(mx-n);
      rslt=min(rslt,rslt1);
      cout << rslt << endl;
    }
 
}
 
int main()
{
  FIn;
  // file;
  cin >> t;
  while(t--){
      cin >> n;
      rslt=0;
      rslt1=0;
      rslt2=0;
      mx=-2000000000;
      for(int i=0;i<2*n;i++){
        cin >> arr[i];
        rslt+=abs(arr[i]);
        if(n==2){
          rslt2+=abs(arr[i]-2);
        }
        rslt1+=abs(arr[i]+1);
        mx=max(mx,arr[i]);
      }
      solve();
  }
  
}