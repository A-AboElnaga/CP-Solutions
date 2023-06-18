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

<bool> arr[100005];
 counter[100005];


pair<pair<int,int>,int>> rslt;

(){
n!=0){
        cout << -1 << endl;
        return;
    }
    rslt.clear();
    c1/=n;
    for(int j=0;j<m;j++){
      int k=0;
      for(int i=0;i<n;i++){
        if(counter[i]==c1){
          continue;
        }  
        if(counter[i]>c1 && arr[i][j]==1){
          for(;k<n;k++){
            if(counter[k]<c1 && arr[k][j]==0){
              rslt.push_back({{k+1,i+1},j+1});
              counter[i]-=1;
              arr[i][j]=0;
              arr[k][j]=1;
              counter[k]+=1;
              break;
            }
          }
        }
      }
    }
    cout << rslt.size() << endl;
    for(auto el:rslt){
      cout << el.first.first <<' ' << el.first.second << ' ' << el.second << endl;
    }
}
 
int main()
{
  FIn;
  // file;
  cin >> t;
  while(t--){
    c1=0;
    cin >> n >> m;
    for(int i=0;i<n;i++){
      arr[i].clear();
      c=0;
      for(int j=0;j<m;j++){
        cin >> x;
        if(x==1){
          c1+=1;
          c+=1;
        }
        arr[i].push_back(x);
      }
      counter[i]=c;
    }
 
    solve();
  }
}