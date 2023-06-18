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

pair<int,int> p1, pair<int,int> p2){
first==p2.first){
 p1.second>p2.second;


 p1.first<p2.first;



int main()
{ 
  FIn; 
  // file;
  int t; cin >> t;
  while(t--){
      int n,m; cin >> n >> m;
      int wins[n+1]={};
      vector<pair<int,int>> v;
      int arr[n+1]={};
      int cost[n+1]={};
      for(int i=1;i<=n;i++){
        wins[i]=1;
        int x; cin >> x;
        arr[i]=i;
        cost[i]=x;
        v.push_back({x,i});
      }
      sort(v.begin(),v.end(),comp);
      vector<pair<int,int>> rslt;
      int sm=0;
      for(int i=0;i<n;i++){
        if(sm+v[i].first<=m){
          rslt.push_back(v[i]);
          wins[v[i].second]-=1;
          wins[v[i].second-1]+=1;
          sm+=v[i].first;
        }
        else break;
      }
 
      int mx_wins=rslt.size();
      if(mx_wins==n) cout << 1<< endl;
      else{
        
        if(!rslt.empty() && sm-rslt[rslt.size()-1].first+cost[mx_wins+1]<=m){
        cout << n+1-(mx_wins+1)<< endl;
} else cout << n+1-mx_wins <<endl;
  
      }
 
  }
 
return 0;
}