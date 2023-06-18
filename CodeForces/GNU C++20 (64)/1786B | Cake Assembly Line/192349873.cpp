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

long long w,h;
 a[200005];
 b[200005];
 mxto_enter;
 mnto_exit;

 to_enter(long long cake,long long dis){
<=cake+w && dis-h>=cake-w){
    return 0;
  }
  else if(dis-h<cake-w){
    return((cake-w)-(dis-h));
  }
  else if(dis+h>cake+w){
    flag=0;
    return 0;
  }
  return 0;
 
}
long long to_exit(long long cake,long long dis){
  if(dis+h>cake+w){
    flag=0;
    return 0;
  }
  if(dis+h<=cake+w){
    return((cake+w)-(dis+h));
  }
  return 0;
}
 
 
int main()
{
  FIn;
  // file;
  cin >> t;
  while(t--){
    cin >> n >> w >> h;
    mxto_enter=0;
    mnto_exit=INT_MAX;
    flag=1;
    for(int i=0;i<n;i++){
      cin >> a[i]; 
    }
    for(int i=0;i<n;i++){
      cin >> b[i];
      b[i]-=(int)(1e9+h);
      mxto_enter=max(mxto_enter,to_enter(a[i],b[i]));
      mnto_exit=min(mnto_exit,to_exit(a[i],b[i]));
    }
 
    if(!flag ||mxto_enter>mnto_exit) cout << "No" << endl;
    else cout << "Yes" << endl;
 
  }
  
 
  return 0;
}