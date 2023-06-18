#include <algorithm>
#include <bits/stdc++.h>
#include <bitset>
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
 
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
using namespace __gnu_pbds;
template<class T> using ordered_set = tree<T, null_type , less<T> , rb_tree_tag , tree_order_statistics_node_update> ;
// find_by_order((int)k) returns iterator of the kth element
// order_of_key((T)key) returns the number of elements less than this key
 
 
#define file                                                                   \
  freopen("output.txt", "w", stdout);                                             \
  freopen("input.txt", "r", stdin)
 
#define FIn                                                                    \
  cin.tie(0);                                                                  \
  cout.tie(0);                                                                 \
  ios_base::sync_with_stdio(false)
 
#define endl '\n'
int tc;
int n,u,v;
vector<pair<int/*to*/,int/*edge_index*/>> adj[200005];
bitset<200005> vis;
queue<int> q;
pair<int,int> rslt[200005];
 
void pre()
{
 
}
void bfs(){
    int front;
    while(!q.empty()){
 
        front=q.front(),q.pop();
        if(vis[front])continue;
        vis[front]=1;
        for(auto el:adj[front]){
            if(vis[el.first])continue;
            if(el.second>=rslt[front].second){
                rslt[el.first].first=rslt[front].first;
            }
            else{
                rslt[el.first].first=rslt[front].first+1;
            }
            rslt[el.first].second=el.second;
            rslt[0].first=max(rslt[0].first,rslt[el.first].first);
            q.push(el.first);
        }
    }
}
 
void solve(){
    cin >> n;
    for(int i=1;i<=n;i++){
        adj[i].clear();
    }
    vis.reset();
    for(int i=1;i<n;i++){
        cin >> u >> v;
        adj[u].push_back({v,i});
        adj[v].push_back({u,i});
    }
    q.push(1);
    rslt[1]={1,0};
    rslt[0]={1,0};
    bfs();
    cout << rslt[0].first << endl;
}
 
int main() {
    FIn;
    //file;
    tc = 1;
    cin >> tc;
    pre();
    while (tc--) {
        solve();
    }
}