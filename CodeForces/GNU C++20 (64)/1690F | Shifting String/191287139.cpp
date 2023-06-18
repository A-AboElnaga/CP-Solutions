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
counter,node;
temp;
 rslt;
205];
205];
1;

 do_temp(){
= temp.size();
  string sloc;
  for(int i=1;i<=temp.size();i++){
    if(temp.size()%i!=0)continue;
    sloc=temp.substr(0,i);
    flag =1;
    for(int j=0;j<temp.size();j++){
        if(temp[j]!=sloc[j%i]){
          flag=0;
          break;
        }
    }
    if(flag){counter=i; break;}
  } 
}
 
void dfs(int start){
  counter=1;
  temp = s[start];
  vis[start]=1;
  node=adj[start];
  while(vis[node]==0){
    counter+=1;
    temp+=s[node];
    vis[node]=1;
    node= adj[node];
  }
  do_temp();
  rslt = lcm(rslt,counter);
 
}
 
int main()
{
  FIn;
  // file; 
  cin >> t;
  while(t--){
    rslt=1;
    int n; cin >> n;
    cin >>s;
    s="."+s;
    for(int i=1;i<=n;i++){
      cin >> adj[i];
      vis[i] =0;
    }
    for(int i=1;i<=n;i++){
      if(vis[i]==1) continue;
      dfs(i);
    }
    cout << rslt << endl;
  }
  return 0;
}