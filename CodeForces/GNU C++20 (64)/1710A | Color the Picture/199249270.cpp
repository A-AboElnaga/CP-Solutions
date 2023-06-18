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
 inf unsigned long long32_MAX
FIn    \
0);  \
(0); \
::sync_with_stdio(false)
 endl '\n'


 n,m,k,x;
100005];

()


// -> fill
long j=0;
  odd=0;
  for(int i=0;i<k;i++){
    x= arr[i];
    if(x/n<2){
      continue;;
    }
    else{
      x/=n;
      j+=x;
      if(x>2)odd=1;
    }
  }
  if(j>=m && ( odd || m%2==0)){
    cout << "Yes" << endl;
    return;
  }
  //!
  j=0;  odd=0;
  for(int i=0;i<k;i++){
    x= arr[i];
    if(x/m<2){
      continue;
    }
    else{
      x/=m;
      j+=x;
      if(x>2)odd=1;
    }
  }
  if(j>=n && (odd|| n%2==0)){
    cout << "Yes" << endl;
    return;
  }
  cout << "No" << endl;
}
 
int main()
{
  FIn;
  // file;
  // t = 1;
  cin >> t;
  while (t--)
  { 
    cin >> n >> m >> k;
    for(int i=0;i<k;i++){
      cin >> arr[i];
    }
    solve();
  }
}