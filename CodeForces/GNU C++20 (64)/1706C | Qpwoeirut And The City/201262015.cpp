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


100005];
long long> val[100005];

 sm;
(){
 n;
;
int i=0;i<n;i++){
      cin >> arr[i];
      val[i]={0,0};
    }
    sm=0;
    for(int i=1;i<n-1;i+=2){
      rslt+=1;
      sm+=max(0,max(arr[i-1],arr[i+1])+1-arr[i]);
      val[i]={rslt,sm};
    }
    rslt=0;
    sm=0;
    for(int i=2;i<n-1;i+=2){
      rslt+=1;
      sm+=max(0,max(arr[i-1],arr[i+1])+1-arr[i]);
      val[i]={rslt,sm};
    }
    if(n%2==1){
      cout << val[n-2].second<< endl;
    }
    else{
      sm=min(val[n-2].second,val[n-3].second);
      for(int i=1;i+1<n-1;i+=2){
        sm=min(sm,val[i].second+(val[n-2].second-val[i+1].second));
      }
      cout << sm << endl;
    }
 
}
 
int main()
{
  FIn;
  // file;
  // t = 1;
  cin >> t;
  while(t--){
    solve();
  }
}