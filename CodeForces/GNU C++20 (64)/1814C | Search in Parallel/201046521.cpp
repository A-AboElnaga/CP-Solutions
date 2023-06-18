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

s2;
int> arr[200005];
<int> r1;
<int> r2;


(){
 n >> s1 >> s2;
0;
  r1.clear(),r2.clear();
  for(int i=1;i<=n;i++){
    cin >> x;
    arr[i]={x,i};
  }
  sort(arr+1,arr+n+1);
  reverse(arr+1,arr+n+1);
  for(int i=1;i<=n;i++){
    if(t1+s1<t2+s2){
      r1.push_back(arr[i].second);
      t1+=s1;
    }
    else{
      r2.push_back(arr[i].second);
      t2+=s2;
    }
  }
  cout << r1.size() << ' ';
  for(auto el:r1){
    cout << el << ' ';
  }cout << endl;
 
  cout << r2.size() << ' ';
  for(auto el:r2){
    cout << el << ' ';
  }cout << endl;
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