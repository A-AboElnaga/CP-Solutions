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
<bit>

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

26];
];

 st;


bool check(int p1,int x){
  if(st.size()==1) return true;
  if(x==p1) return false;
  while(to[x]!=-1){
    x=to[x];
  }
  if(x==p1) return false;
  return true;
}
 
void get_char(char x){
    for(auto it=st.begin();it!=st.end();it++){
      if(check(*it,x-'a')){
        arr[x-'a']=*it;
        to[*it]=x-'a';
        st.erase(it);
        break;
      }
    }
}
void solve(){
  for(int i=0;i<26;i++){
    arr[i]=-1;
    to[i]=-1;
    st.insert(i);
  }
  for(int i=0;i<n;i++){
    if(arr[a[i]-'a']==-1){
      get_char(a[i]);  
    }
    if(st.empty()) break;
  }
  for(int i=0;i<n;i++){
    cc = arr[a[i]-'a']+'a';
    cout << cc ;
  }
  cout << endl;
 
}
 
int main()
{
  FIn;
  // file;
  cin >> t;
  while (t--)
  {
    cin >> n;
    cin >> a;
    st.clear();
    solve();
  }
  return 0;
}