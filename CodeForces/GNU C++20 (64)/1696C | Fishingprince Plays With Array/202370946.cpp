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
 
#define file                                                                   \
  freopen("out.txt", "w", stdout);                                             \
  freopen("in.txt", "r", stdin)
 
#define FIn                                                                    \
  cin.tie(0);                                                                  \
  cout.tie(0);                                                                 \
  ios_base::sync_with_stdio(false)
 
#define endl '\n'
 
int t,n,k;
long long a[200005];
long long b[200005];
long long tmp,x_c,x_v,m;
vector<pair<long long,long long>> a_red;
vector<pair<long long,long long>> b_red;
 
void red(){
  //red a
  x_v=-1;
  x_c=0;
  a_red.clear();
  for(int i=0;i<n;i++){
    tmp=a[i];
    while(tmp%m==0){
      tmp/=m;
    }
    if(tmp==x_v || x_v==-1){
      x_v=tmp;
      x_c+=a[i]/tmp;
    }
    else{
      a_red.push_back({x_v,x_c});
      x_v=tmp;
      x_c=a[i]/tmp;
    }
  }
  a_red.push_back({x_v,x_c});
 
 
  //red b
  x_v=-1;
  x_c=0;
  b_red.clear();
  for(int i=0;i<k;i++){
    tmp=b[i];
    while(tmp%m==0){
      tmp/=m;
    }
    if(tmp==x_v || x_v==-1){
      x_v=tmp;
      x_c+=b[i]/tmp;
    }
    else{
      b_red.push_back({x_v,x_c});
      x_v=tmp;
      x_c=b[i]/tmp;
    }
  }
  b_red.push_back({x_v,x_c});
  
}
 
 
 
void solve(){
  cin >> n >> m;
  for(int i=0;i<n;i++){
    cin >> a[i];
  }
  cin >> k;
  for(int i=0;i<k;i++){
    cin >> b[i];
  }
 
  red();
 
  if(a_red!=b_red){
    cout << "No" << endl;
  }
  else{
    cout << "Yes" << endl;
  }
}
 
 
int main() {
  FIn;
  // file;
  // t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
}