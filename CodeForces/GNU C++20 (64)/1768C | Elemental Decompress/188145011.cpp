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
bool comp(int p1,int p2){
  return p1<=p2;
}
 
int main() {
  FIn;
  // freopen ("out.txt", "w", stdout);
  // freopen ("in.txt", "r", stdin);
  int t; cin >> t;
  while(t--){
   int n; cin >> n;
   int p[n+1]={}, q[n+1]={},a[n+1]={};
   bool used_p[n+1]={}, used_q[n+1]={};
   map<int,int> counter;
   int mx=0;
   for(int i=1;i<=n;i++){
    cin >> a[i];
    counter[a[i]]+=1;
    mx=max(mx,counter[a[i]]);
   }
   if(mx>2 || counter[1]>1 || counter[n]<1){
    cout << "NO" << endl;
   }
   else{
      bool flag =1;
      for(int i=1;i<=n;i++){
        int val = a[i];
        if(!used_p[val]){
          p[i]=val;
          used_p[val]=1;
        }
        else if(!used_q[val]){
          q[i]=val;
          used_q[val]=1;
        }
      }
 
      for(int i=1;i<=n;i++){
        int val = p[i];
        if(val!= 0 &&!used_q[val]){
          q[i]=val;
          used_q[val]=1;
        }
      }
      for(int i=1;i<=n;i++){
        int val = q[i];
        if(val != 0 && !used_q[val]){
          p[i]=val;
          used_p[val]=1;
        }
      }
 
      queue<int> s_p;
      queue<int> s_q;
      vector<pair<int,int>> v_p;
      vector<pair<int,int>> v_q;
      for(int i=n; i >=1;i--){
        if(!used_p[i])s_p.push(i);
        if(!used_q[i])s_q.push(i);
        if(p[i]!=0 && q[i]==0){
          v_p.push_back({p[i],i});
        }
        if(q[i]!=0 && p[i]==0){
          v_q.push_back({q[i],i});
        }
      }
      sort(v_q.rbegin(),v_q.rend());
      sort(v_p.rbegin(),v_p.rend());
      if(flag)
      for(auto el:v_q){
          if(el.first>=s_p.front())
          {p[el.second]=s_p.front();
          s_p.pop(); 
          }
          else {flag=0; break;} 
      }
      if(flag)
      for(auto el:v_p){
          if(el.first>=s_q.front())
          { q[el.second]=s_q.front();
            s_q.pop();
          }
          else{ flag =0; break;}
      }
      if(flag)
      {  cout << "YES" << endl;
        for(int i=1;i<=n;i++){
          cout << p[i] << ' ';
        } cout << endl;
        for(int i=1;i<=n;i++){
          cout << q[i] << ' ';
        } cout << endl;}
      else cout << "NO" << endl;
      }
 
  }
   
  return 0;
}