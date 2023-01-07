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
#include <sstream>
 
using namespace std;
#define inf unsigned long long32_MAX
#define FIn                                                                    \
  cin.tie(0);                                                                  \
  cout.tie(0);                                                                 \
  ios_base::sync_with_stdio(false);
#define endl '\n'
 
int main() {
  FIn;
  // freopen ("out.txt", "w", stdout);
  // freopen ("in.txt", "r", stdin);
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    vector<int> temp(n);
    for(int i=0;i<n;i++){
      cin >> temp[i];
    }
    int lvl[n+1]={};
    vector<int> l;
    vector<int> r;
    lvl[n+1]=0;
    bool flag=0;
    for(int i=0;i<n;i++){
      if(temp[i]==n){
          flag=1;
      }
      else if(!flag){ 
          l.push_back(temp[i]);
      }
      else if(flag){
          r.push_back(temp[i]);
      }
    }
    queue<pair<int,vector<int>>> q;
    q.push({0,l});
    q.push({0,r});
    while(!q.empty()){
      l.clear(); r.clear();
      vector<int> v = q.front().second;
      int lv = q.front().first;
      q.pop();
      int mx =0;
      for(int i=0;i<v.size();i++){
        mx = max(mx,v[i]);
      }
    lvl[mx]=lv+1;
    flag=0;
    for(int i=0;i<v.size();i++){
      if(v[i]==mx){
          flag=1;
      }
      else if(!flag){ 
          l.push_back(v[i]);
      }
      else if(flag){
          r.push_back(v[i]);
      }
    }
    if(!l.empty())
    q.push({lvl[mx],l});
    if(!r.empty())
    q.push({lvl[mx],r});
    }
    for(int i=0;i<n;i++){
      cout << lvl[temp[i]] << ' ';
    } cout << endl;
 
  }
  
  return 0;
}