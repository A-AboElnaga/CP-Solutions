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
 
int t,n;
int k,x,rslt;
int a[200005];
bool valid[200005];
void solve(){
  cin >> n >> k;
  for(int i=0;i<n;i++){
    cin >> a[i];
  }
  valid[0]=1;
  for(int i=1;i<n;i++){
    if(a[i]*2>a[i-1]){
      valid[i]=1;
    }
    else valid[i]=0;
  }
  x=0,rslt=0;
  for(int i=0;i<n;i++){
    if(valid[i])x+=1;
    else{
      rslt+=max(x-k,0);
      x=1;
    }
  }
  rslt+=max(x-k,0);
  cout << rslt << endl;
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