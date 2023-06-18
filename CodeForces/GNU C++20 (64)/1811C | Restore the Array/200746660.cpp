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



200005],x,y;

()

;


  for(i=0;i<n;i++){
    cin >> arr[i];
  }
  for(i=0;i<n-1;i++){
    if(arr[i]>=arr[i+1]){
      cout <<arr[i] << ' ';
    }
    else if(arr[i]<arr[i+1]){
      cout << 0 << ' ' << arr[i] << ' ';
      x=arr[i];
      i+=1;
      flag=1; break;
    }
  }
  for(;i<n;i++){
    y=arr[i];
    if(x==max(x,y)){
      if(i+1<n){
        cout << min(y,arr[i+1]) << ' ';
        x=min(y,arr[i+1]);
      }
      else{
        cout << max(y,arr[i]) << ' ';
      }
    }
    else{
      cout << y << ' ';
      x=y;
    }
  }
  if(flag==0)cout << arr[n-1];
  cout << endl;
  
 
 
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