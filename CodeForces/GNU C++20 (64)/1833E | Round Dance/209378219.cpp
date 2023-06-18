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
 
 
 
int tc;
int n;
int u,v;
int connected_com,num_cycles;
vector<int> adj[200005];
bool vis[200005];
int open[200005];
stack<int> stk;
void pre();
void dfs(){
    int tp;
    bool cycle=0;
    connected_com+=1;
    while(!stk.empty()){
        tp=stk.top();
        stk.pop();
        if(vis[tp])continue;
        vis[tp]=1;
        for(auto el:adj[tp]){
            if(open[el]!=INT_MAX && open[el]+1<open[tp]){
                cycle=1;
            }
            if(vis[el])continue;
            open[el]=open[tp]+1;
            stk.push(el);
        }
    }
    if(cycle)num_cycles+=1;
 
}
 
void solve() {
    cin >> n;
    connected_com=0,num_cycles=0;
    for(int i=0;i<=n;i++){
        adj[i].clear();
        vis[i]=0;
        open[i]=INT_MAX;
    }
    for(int i=1;i<=n;i++){
        cin >> u;
        adj[u].push_back(i);
        adj[i].push_back(u);
    }
    for(int i=1;i<=n;i++){
        if(vis[i])continue;
        while(!stk.empty())stk.pop();
        open[i]=0;
        stk.push(i);
        dfs();
    }
    cout << num_cycles+((connected_com>num_cycles)?1:0) << ' ' << connected_com << endl;
 
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