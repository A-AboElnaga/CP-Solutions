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
#include <sstream>
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
#define inf unsigned long long32_MAX
#define FIn                                                                    \
  cin.tie(0);                                                                  \
  cout.tie(0);                                                                 \
  ios_base::sync_with_stdio(false)
#define endl '\n'
int t,n,m;
long long base;
int x,v;
map<int,int> mp;
pair<int/*changed*/,int/*when*/> arr[200005];
int main() {
  FIn;
  // file;
  cin >> t;
  while (t--){
    cin >> n >> m;
    base = (long long)n * (long long)m * (long long)(m+1);
    mp.clear();
 
    for(int i=1;i<=n;i++){
      cin >> x;
      mp[x]=0;
      arr[i]={x,0};
    }
 
    for(int i=1;i<=m;i++){
      cin >> x >> v;
      // add the previous values
      mp[arr[x].first]+= i-arr[x].second;
      arr[x]={v,i};
      mp[v]+=0;
    }
 
    for(int i=1;i<=n;i++){
      mp[arr[i].first]+= m+1-arr[i].second;
    }
      for(auto el:mp){
        x = el.second;
        base-=((long long)(x)*(long long)(x-1))/2ll;
    }
    cout << base << endl;
 
  }
  return 0;
}