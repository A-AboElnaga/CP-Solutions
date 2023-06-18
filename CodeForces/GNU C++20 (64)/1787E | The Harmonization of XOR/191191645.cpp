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
200005];
200005];
<int> rslt[200005];




  FIn;
  // file; 
  cin >> t;
  Xor[0]=0;
  for(int i=1;i<200005;i++){
    Xor[i]=Xor[i-1]^i;
  }
  while(t--){
    cin >> n  >>  k >> x;
    if((k%2==0 && Xor[n]!=0) || (k%2!=0 && Xor[n]!=x)) {cout << "No" << endl; continue;}
    arr[0]=1;
    for(int i=1;i<=n;i++){
      arr[i]=0;
      rslt[i].clear();
    }
    a=1;
    int i=1;
    for(;i<k && a<=n;){
      b=x^a;
      if(arr[a]==0 && a!=x && b<=n){
        rslt[i].push_back(2); rslt[i].push_back(a); rslt[i].push_back(b);
        i++;
        arr[a]=1;arr[b]=1;
      }
      a+=1;
    }
    if(i!=k) {cout << "No" << endl; continue;}
 
    cout << "Yes" << endl;
 
    cout << (n-(2*(k-1))) << ' ';
    for(int i=1;i<=n;i++){
      if(arr[i]==0) cout << i << ' ';
    } cout << endl;
    for(int i=1;i<k;i++){
      for(auto el:rslt[i]){
        cout << el << ' ';
      }cout << endl;
    }
  }
 
  return 0;
}