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



1;
cq;
 arr[300005];
(){
int i=0;i<n;i++){
[i]!='?'){
        arr[i%k].insert(s[i]);
        if(arr[i%k].size()>1){
          cout <<"No"<< endl;
          return;
        }
      }
    }
    s="";
    for(int i=0;i<k;i++){
      if(arr[i].empty())s+='?';
      else s+=*(arr[i].begin());
    }
    for(int i=0;i<k;i++){
      if(s[i]=='1')c1+=1;
      if(s[i]=='0')c0+=1;
    }
    if(max(c1,c0)>k/2){
      cout <<"No" << endl;
      return;
    }
 
    cout << "Yes" << endl;
}
 
int main()
{
  FIn;
  // file;
  cin >> t;
  while(t--){
    cin >> n >> k;
    cin >> s;
    flag=1;
    c1=0,c0=0,cq=0;
    for(int i=0;i<k;i++){
      arr[i].clear();
    }
    solve();
 
  }
  return 0;
}