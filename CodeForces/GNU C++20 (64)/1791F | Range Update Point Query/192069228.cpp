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

200005];
<int> v;

 st; 
,x;

 update(){
 arr[x];
    int sum=0;
    while(tt>0){
      sum+=(tt%10);
      tt/=10;
    }
    arr[x]=sum;
}
 
int main()
{
  FIn;
  // file;
  cin >> t;
  while(t--){
    cin >> n >> q;
    st.clear();
    for(int i=1;i<=n;i++){
      cin >> arr[i];
      if(arr[i]>=10)
        st.insert(i);
    }
    auto itl = st.begin();
    while(q--){
      cin>> tt;
      if(tt==1){
        cin >> l >> r;
        itl = st.lower_bound(l);
        for(auto pos=itl;pos!=st.end() && *pos<=r; pos++){ v.push_back(*pos);}
        for(auto el:v){x=el;update(); st.erase(x);}
        while(!v.empty()){
          x=*v.rbegin(); v.pop_back();
          if(arr[x]>=10)st.insert(x);
        }
      }
      else{
        cin >> x;
        cout << arr[x] << endl;
      }
    } 
  }
 
  return 0;
}