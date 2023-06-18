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
 
int t,n,k,cost,accl,accr,l,r;
string s;
void solve(){
  cin >> n >> k;
  cin >> s;
  r=s.find_last_of('1',n-1);
  if(r!=-1 &&(n-1)-r<=k){
    k-=(n-1)-r;
    s.erase(r,1);
    s.push_back('1');
  }
  l=s.find_first_of('1',0);
  if(l!=-1 && l!=n-1 &&l<=k){
    s.erase(l,1);
    s="1"+s;
  }
  cost=0;
  for(int i=0;i<n-1;i++){
    cost+=(s[i]-'0')*10 +(s[i+1]-'0');
  }
  // cout << s << endl;
  cout << cost << endl;
 
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