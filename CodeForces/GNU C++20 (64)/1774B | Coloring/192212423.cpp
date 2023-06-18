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


x;
100005];

(){
 if(n%k) x+=1;
){
        cout << "No" << endl;
        return;
    }
    int i=0;
    for(;i<n%k;i++){
      if(x<arr[i]){
        cout << "No" << endl;
        return;
      }
    }
 
 
    if(n%k)x-=1;
    for(;i<m;i++){
      if(x<arr[i]){
        cout << "No" << endl;
        return;
      }
    }
    cout << "Yes" << endl;
}
 
int main()
{
  FIn;
  // file;
  cin >> t;
  while(t--){
    cin >> n >> m >> k;
    for(int i=0;i<m;i++){
        cin >> arr[i];
    }
    sort(arr,arr+m,[](int &a,int &b){return a>b;});
    solve();
  }
 
  return 0;
}