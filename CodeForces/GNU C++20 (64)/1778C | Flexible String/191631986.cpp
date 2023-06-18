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

x,mask;
;
unordered_set<int> st;
int> mp;
 letters[10];
0;
 rslt =0;
 length;
long long loc;
int main()
{
  FIn;
  // file;
  cin >> t;
  while(t--){
    cin >> n >> k;
    cin >> a >> b;
    rslt =0;
    for(int i=0;i<n;i++){
      st.insert(a[i]);
    }
    x = st.size();
 
    if(k>=x){
      rslt = ((long long)(n)*(long long)(n+1ll))/2;
      cout <<  rslt << endl; continue;
    }
 
    for(int i=0;i<x;i++){
      letters[i]=*st.begin();
      st.erase(*st.begin());
    }
    start = 1<< k; start-=1;
 
    //choose letters by bit mask
    for(int i=start;i<(1<<x);i++){
      if(__popcount(i)!=k)continue;
      loc=0; length=0;
      mask=1;
      mp.clear();
      for(int j=0;j<x;j++){
        if(mask&i)mp[letters[j]]=1;
        mask = mask<<1;
      }
      for(int j=0;j<n;j++){
        if(a[j]==b[j] || mp[a[j]]==1){
          length+=1;
        }
        else{
          loc+= ((length)*(length+1))/2;
          length=0;
        }
      }
      loc+= ((length)*(length+1))/2;
      rslt =max(rslt,loc);
    }
    cout << rslt << endl;
  }
  return 0;
}