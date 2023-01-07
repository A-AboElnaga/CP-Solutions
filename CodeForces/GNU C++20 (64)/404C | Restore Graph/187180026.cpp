#include <algorithm>
#include <cmath>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_set>
#include <utility>
#include <valarray>
#include <vector>
 
using namespace std;
#define inf INT32_MAX
#define FIn                                                                    \
  cin.tie(0);                                                                  \
  cout.tie(0);                                                                 \
  ios_base::sync_with_stdio(false);
 
#define endl '\n'
#define PII   pair<int,int>
 
int main() {
  FIn;
  // freopen ("out.txt", "w", stdout);
  // freopen ("in.txt", "r", stdin);
  int n,k;
  cin >> n >> k;
  vector<PII/*cost,num*/> pq;
  map<int/*cost*/,int/*count*/> mp;
  int mx=0;
  for(int i=1;i<=n;i++){
    int x; cin >> x;
    pq.push_back({x,i});
    mp[x]+=1;
    mx=max(mx,0);
  }
  if(mx+1>mp.size() || mp[0]!=1){
    cout << -1 << endl;
  }
  else{
    sort(pq.begin(),pq.end());
    auto s_node= pq.begin();
    queue<PII> q;
    vector<int> adj[n+1];
    q.push(*s_node);
    s_node++;
    int rslt=0;
    int edge_count=0;
    bool flag=1;
    while(!q.empty() && s_node!=pq.end()){
        if(q.front().first+1==s_node->first && edge_count<k){
          adj[q.front().second].push_back(s_node->second);
          q.push(*s_node);
          s_node++;
          edge_count+=1;
          rslt+=1;
        }
        else if(q.front().first+1==s_node->first && edge_count>=k){
          q.pop();
          edge_count=1;
        }
        else if(q.front().first+1<s_node->first){
            q.pop();
            edge_count=1;
        }
        else if(q.front().first+1>s_node->first){
            flag=0;
            break;
        }
    }
    if(s_node!=pq.end())flag=0;
 
    if(!flag) cout << -1 << endl;
    else{
      cout << rslt << endl;
      for(int i=1;i<=n;i++){
        for(auto el:adj[i])
        cout << i << ' ' << el << endl;
      }
    }
  }
 
  
 
 
  return 0;
}