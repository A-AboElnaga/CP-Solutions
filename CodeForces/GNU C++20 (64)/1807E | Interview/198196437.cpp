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
// #define endl '\n'

 reply;
200005];

(){
"? " << (m-l+1) << ' ';
 i=l;i<=m;i++){
<< i << ' ';
 endl;
  cin >> reply;
  if(arr[m]-arr[l-1]<reply){
    return 'l';
  }
  else{
    return 'r';
  }
 
}
 
void solve(){
  l=1,r=n;
  while(l<r){
    m=(l+r)/2;
    if(check()=='l'){
      r=m;
    }
    else{
      l=m+1;
    }
  }
  cout << "! " << l << endl;
}
 
int main()
{
  // FIn;
  // file;
  // t=1;
  cin >> t;
  while(t--){
    cin >> n;
    arr[0]=0;
    for(int i=1;i<=n;i++){
      cin >> arr[i];
      arr[i]+=arr[i-1];
    }
    solve();
  }
}