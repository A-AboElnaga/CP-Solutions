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
<stack>
<string>
<unordered_set>
<utility>
<valarray>
<vector>
namespace std;

 file                                                                   \
"output.txt", "w", stdout);                                             \
"input.txt", "r", stdin)

FIn                                                                    \
0);                                                                  \
(0);                                                                 \
::sync_with_stdio(false)

 endl '\n'



200005],b[200005];


(){
;

  for(int i=1;i<=n;i++){
    cin >> a[i];
  }
  for(int i=1;i<=n;i++){
    cin >> b[i];
  }
  while(a[l]==b[l]){
    l++;
  }
  while(a[r]==b[r]){
    r--;
  }
  mn=INT_MAX;
  mx=0;
  for(int i=l;i<=r;i++){
    mx=max({mx,a[i],b[i]});
    mn=min({mn,a[i],b[i]});
  }
  while(l>1 && a[l-1]<=mn){
    l--;
    mn=min(mn,a[l]);
  }
  while(r<n && a[r+1]>=mx){
    r++;
    mx=max(mx,a[r]);
  }
  cout << l << ' ' << r << endl;
};
 
int main() {
  FIn;
  // file;
  // t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
}