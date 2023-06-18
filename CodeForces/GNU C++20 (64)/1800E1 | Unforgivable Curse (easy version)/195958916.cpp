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
<sstream>
<stack>
<string>
<unordered_set>
<utility>
<valarray>
<vector>
namespace std;

 file                                                                   \
"out.txt", "w", stdout);                                             \
"in.txt", "r", stdin)
 inf unsigned long long32_MAX
FIn                                                                    \
0);                                                                  \
(0);                                                                 \
::sync_with_stdio(false)
 endl '\n'





bb;


(){
    for(int i=0;i<26;i++){
      if(a[i]!=b[i]){
        cout << "NO" << endl;
        return ;
      }
    }
    if(k<=n/2){
      cout << "YES" << endl;
      return;
    }
    for(int i=max(n-k,0);i<n-(max(n-k,0));i++){
      if(aa[i]!=bb[i]){
        cout << "No" << endl;
        return ;
      }
    }
    cout << "Yes" << endl;
    return;
}
 
int main() {
  FIn;
  // file;
  cin >>t;
  while(t--){
    cin >> n >>k;
    for(int i=0;i<26;i++){
      a[i]=0;
      b[i]=0;
    }
    aa="";bb="";
    for(int i=0;i<n;i++){
      cin >> x;
      aa.push_back(x);
      a[x-'a']+=1;
    }
    for(int i=0;i<n;i++){
      cin >> x;
      bb.push_back(x);
      b[x-'a']+=1;
    }
 
    solve();
 
  }
 return 0;
}