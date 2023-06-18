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


;
int,int>> st;
200005];




  FIn;
  // file;
  cin >> t;
  while(t--){
    rslt = 0;
    st.clear();
    cin >> n;
    for(int i=1;i<=n;i++){
      cin >> x;
      st.insert({i,x});
      arr[x]=i;
    }
    l=1;
    r=n;
    bool flag=0;
    while(st.size()>1){
      if(st.begin()->second==l && st.rbegin()->second==r){
        st.erase({arr[l],l});l+=1;
        st.erase({arr[r],r});r-=1;
      }
      else{
        flag=1;
        st.erase({arr[l],l});l+=1;
        st.erase({arr[r],r});r-=1;
        rslt = st.size();
      }
    }
    rslt = (n-rslt)/2;
    if(!flag) rslt=0;
    cout << rslt << endl;
 
  }
 
  return 0;
}