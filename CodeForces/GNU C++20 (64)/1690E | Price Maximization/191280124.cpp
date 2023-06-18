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
 long long rslt;
200005];
counter;


<int> mods[1004];
 stk;


  FIn;
  // file; 
  cin >> t;
  while(t--){
      rslt=0;
      counter=0;
      flag=0;
      cin >> n >> k;
      for(int i=0;i<k;i++){
        mods[i].clear();
      }
      for(int i=0;i<n;i++){
        cin >> a[i];
        rslt+= (long long)(a[i]/k);
        a[i] = a[i]%k;
      }
 
      sort(a,a+n);
      
      int l=0,r=n-1;
      
      while(l<r){
        while(a[l]+a[r]<k && l<r)l++;
        if(l>=r) break;
        rslt+=1ll;
        l++,r--;
      }
      cout << rslt << endl;
  }
  return 0;
}