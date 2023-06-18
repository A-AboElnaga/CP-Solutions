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

FIn                                                                    \
0);                                                                  \
(0);                                                                 \
::sync_with_stdio(false)

 endl '\n'


200005];
int> arr[200005];


(){

;
  for(int i=1;i<=n;i++){
    vis[i]=0;
    arr[i]={0,0};
  }
  for(int i=1;i<=n;i++){
    cin >> x >> y;
    if(arr[x].first==0) arr[x].first=y;
    else if(arr[x].second==0) arr[x].second=y;
    else flag=0;
   
    if(arr[y].first==0) arr[y].first=x;
    else if(arr[y].second==0) arr[y].second=x;
    else flag=0;
  }
}
 
void go(int node){
  x+=1;
  vis[node]=1;
  if(!vis[arr[node].first]){
    go(arr[node].first);
  }
  else if(!vis[arr[node].second]){
    go(arr[node].second);
  }
}
 
 
void solve() {
  if(flag==0){
    cout << "No" << endl;
    return;
  }
  for(int i=1;i<=n;i++){
    if(vis[i])continue;
    x=0;
    go(i);
    if(x%2==1){
      cout << "No" << endl;
      return;
    }
  }
  cout << "Yes" << endl;
}
 
 
int main() {
  FIn;
  // file;
  // t = 1;
  cin >> t;
  while (t--) {
    read();
    solve();
  }
}