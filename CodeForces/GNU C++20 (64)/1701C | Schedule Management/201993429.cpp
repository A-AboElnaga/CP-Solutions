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

priority_queue<pair<int/*tasks*/,int/*worker*/>> pq;


[200005];

mid;
 free_hand,needed_hand;
(int val){
  free_hand=0;needed_hand=0;
  for(int i=1;i<=n;i++){
    if(worker[i]<val){
      free_hand+=(val-worker[i])/2;
    }
    else{
        needed_hand+=worker[i]-val;
    }
  }
  return free_hand>=needed_hand;
}
void biS(){
  l=0,r=2*m;
  while(l<r){
    mid=(r+l)/2;
    if(check(mid)){
      r=mid;
    }
    else{
      l=mid+1;
    }
  }
}
 
 
void solve() {
  cin >> n >> m;
  for(int i=0;i<=n;i++){
    worker[i]=0;
  }
  for(int i=1;i<=m;i++){
        cin >> x;
        worker[x]+=1;
  }
  biS();
  cout << l << endl;
 
 
}
 
int main() {
  FIn;
  // file;
  t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
}