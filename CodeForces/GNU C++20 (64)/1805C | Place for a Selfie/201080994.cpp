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
#include <bitset>
#include <bits/stdc++.h>
using namespace std;
 
#define file                       \
  freopen("out.txt", "w", stdout); \
  freopen("in.txt", "r", stdin)
 
#define FIn    \
  cin.tie(0);  \
  cout.tie(0); \
  ios_base::sync_with_stdio(false)
#define endl '\n'
int t,n,m,k; 
long long a,b,c,sq;
vector<int> lines;
 
void do_case(){
    if(1){
      auto it1=lower_bound(lines.begin(),lines.end(),b)-lines.begin();
      if(it1<n &&(lines[it1]-b)*(lines[it1]-b)<4*a*c){
        cout << "Yes" << endl;
        cout << lines[it1] << endl;
        return;
      }
      if(it1>0 &&(lines[it1-1]-b)*(lines[it1-1]-b)<4*a*c){
        cout << "Yes" << endl;
        cout << lines[it1-1] << endl;
        return;
      }
      cout << "No" << endl;
    }
}
 
void solve(){
  cin >> n >> m;
  lines.clear();
  for(int i=0;i<n;i++){
    cin >> k;
    lines.push_back(k);
  }sort(lines.begin(),lines.end());
  for(int i=0;i<m;i++){
    cin >> a >> b >> c;
    if(c<=0)cout <<"No" <<endl;
    else do_case();
  }
}
 
int main()
{
  FIn;
  // file;
  // t = 1;
  cin >> t;
  while(t--){
    solve();
  }
}