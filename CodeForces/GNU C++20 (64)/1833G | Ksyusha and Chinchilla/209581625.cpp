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
  freopen("input.txt", "r", stdin);\
  freopen("output.txt", "w", stdout)
 
#define FIn                                                                    \
  cin.tie(0);                                                                  \
  cout.tie(0);                                                                 \
  ios_base::sync_with_stdio(false)
 
#define endl '\n'
 
const int mod=1e9+7;
int tc;
int n;
int u,v;
map<pair<int,int>,int> edge_index;
bool vis[200005];
vector<int> adj[200005];
int parent[200005];
int num_childs[200005];
vector<int> rslt;
queue<int> q;
int parent_to[200005];
void build_parents(){
    int parent_node;
    while(!q.empty()){
        parent_node=q.front();q.pop();
        if(vis[parent_node])continue;
        vis[parent_node]=1;
        for(auto el:adj[parent_node]){
            if(vis[el])continue;
            parent[el]=parent_node;
            q.push(el);
        }
    }
}
void count_childs(){
    int child_node;
    while(!q.empty()){
        child_node=q.front();q.pop();
        if(parent_to[child_node]){
            q.push(child_node);
            continue;
        }
        if(vis[child_node])continue;
        vis[child_node]=1;
        if(parent[child_node]!=child_node){
            if(num_childs[child_node]==3){
                int un=child_node,vn=parent[child_node];
                if(un>vn)swap(un,vn);
                rslt.push_back(edge_index[{un,vn}]);
            }
            else{
                num_childs[parent[child_node]]+=num_childs[child_node];
            }
            parent_to[parent[child_node]]-=1;
            q.push(parent[child_node]);
        }
    }
}
 
void pre();
 
void solve() {
    edge_index.clear();
    rslt.clear();
    cin >> n;
    for(int i=1;i<=n;i++){
        adj[i].clear();
        parent[i]=i;
        parent_to[i]=0;
        num_childs[i]=1;
    }
    for(int i=1;i<n;i++){
        cin >> u >> v;
        if(u>v)swap(u,v);
        edge_index[{u,v}]=i;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    if(n%3!=0){
        cout << -1 << endl;
        return;
    }
    parent[1]=1;
    q.push(1);
    memset(vis,0,n+3);
    build_parents();
    memset(vis,0,n+3);
    for(int i=1;i<=n;i++){
        if(adj[i].size()==1){
            q.push(i);
        }
        parent_to[i]=adj[i].size()-1;
    }
    parent_to[1]=adj[1].size();
    
    count_childs();
    if(rslt.size()==n/3-1){
        cout << rslt.size() << endl;
        for(auto el:rslt){
            cout << el << ' ';
        }cout << endl;
    }
    else{
        cout << -1 << endl;
    }
}
 
int main() {
    FIn;
    //file;
    //freopen("input.in", "r", stdin);
    tc = 1;
    cin >> tc;
    pre();
    for(int i=1;i<=tc;i++){
        //cout << "Case " << i <<": ";
        solve();
    }
}
 
void pre(){
}
long long inv(long long i) {
    return i <= 1 ? i : mod - (long long)(mod/i) * inv(mod % i) % mod;
}