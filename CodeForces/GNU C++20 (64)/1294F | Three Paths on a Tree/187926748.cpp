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
#include <sstream>
#include <stack>
#include <string>
#include <unordered_set>
#include <utility>
#include <valarray>
#include <vector>
 
using namespace std;
#define inf unsigned long long32_MAX
#define FIn                                                                    \
  cin.tie(0);                                                                  \
  cout.tie(0);                                                                 \
  ios_base::sync_with_stdio(false);
#define endl '\n'
#define MAX  200005
#define PII pair<int,int>
 
 
 
int n;
int lvl[3][MAX]={{0}};
bool vis[3][MAX]={{0}};
int  parent[3][MAX]={{0}};
vector<int> Adj[MAX]={};
 
queue <int> q;
set   <int> st;
 
 
 
int bfs(int i){
    int mxlvl=0;
    int targ =q.front();
    while(!q.empty()){
        int node = q.front();
        q.pop();
        if(vis[i][node]==1){continue;}
        vis[i][node]=1;
        for(int el:Adj[node]){
            if(vis[i][el]==0){
              lvl[i][el]=lvl[i][node]+1;
              parent[i][el]=node;
                if(lvl[i][el]>mxlvl){
                  mxlvl =lvl[i][el];
                  targ = el;
                }
              q.push(el);
            }
          }
    }
    return targ;
}
 void get_parent(int node,int i){
      while(parent[i][node]!=node){
        st.insert(node);
        node = parent[i][node];
      }
      st.insert(node);
}
 
 
 
int main() {
  FIn;
  // freopen("out.txt", "w", stdout);
  // freopen("in.txt", "r", stdin);
  cin >> n;
  for(int i=0;i<n-1;i++){
    int a,b; cin >> a >> b;
    Adj[a].push_back(b);
    Adj[b].push_back(a);
  }
  int rslt=0;
 
  q.push(1);
  parent[0][1]=1;
  int a = bfs(0);
 
  q.push(a);
  parent[1][a]=a;
  int b = bfs(1);
 
  rslt = lvl[1][b];
 
  q.push(b);
  parent[2][b]=b;
  int c = bfs(2);
 
  c=a;
  int lvlmx=0;
  for(int i=1;i<=n;i++){
    if(lvlmx<lvl[1][i]+lvl[2][i]){
      lvlmx=lvl[1][i]+lvl[2][i];
      c = i;
    }
  }
 
  get_parent(b,1);
  get_parent(c,1);
 
  cout << st.size()-1 << endl;
  if(b==c) 
   {if(b!=1 && a!=1)
    c =1;
  else if(b!=2 && a!=2)
    c =2;
  else c=3;} 
 
  cout << a << ' ' << b << ' ' << c  << endl;
 
  return 0;
}