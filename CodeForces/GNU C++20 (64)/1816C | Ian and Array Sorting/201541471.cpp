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


 arr[300005];
 inc;
(){
;
 i=0;i<n;i++){
 arr[i];

  if(n==2){
    if(arr[0]<=arr[1]){
      cout << "Yes" << endl;
    }
    else{
      cout << "No" << endl;
    }
    return;
  }
  for(int i=1;i+1<n;i++){
    if(arr[i-1]<=arr[i]){
      continue;
    }
    else{
      inc = arr[i-1]-arr[i];
      arr[i]+=inc;
      arr[i+1]+=inc;
    }
  }
  for(int i=n-1;i>1;i--){
    if(arr[i-1]<=arr[i]){
      continue;
    }
    else{
      inc = arr[i]-arr[i-1];
      arr[i-1]+=inc;
      arr[i-2]+=inc;
    }
  }
  if(arr[0]<=arr[1]){
    cout << "Yes" << endl;
  }
  else{
    cout << "No" << endl;
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