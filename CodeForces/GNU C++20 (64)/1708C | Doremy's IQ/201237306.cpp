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
// #define endl '\n'
s;
string rslt;
100005];
(){
 n >> q;
 i=0;i<n;i++){
 arr[i];

arr,arr+n);
.clear();
  for(int i=0;i<n && s<=q;i++){
    if(arr[i]<=s){
      rslt.push_back('1');
    }
    else if(s+1<=q){
      rslt.push_back('1');
      s+=1;
    }
    else{
      rslt.push_back('0');
    }
  }
  reverse(rslt.begin(),rslt.end());
  cout << rslt << endl;
 
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