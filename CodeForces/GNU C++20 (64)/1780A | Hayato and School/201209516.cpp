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
int t,n,x;
vector<int> odd,even;
void solve(){
  cin >> n;
  odd.clear();even.clear();
  for(int i=1;i<=n;i++){
    cin  >> x;
    if(x%2==0)even.push_back(i);
    if(x%2==1)odd.push_back(i);
  }
  if(odd.size()>=1 && even.size()>=2){
    cout << "Yes" << endl;
    cout << *odd.begin() << ' ' << *even.begin() << ' ' << *even.rbegin() << endl;
    return;
  }
  if(odd.size()>=3){
    cout << "Yes" << endl;
    cout << *odd.begin() << ' ' << *odd.rbegin() << ' ' << *(next(odd.rbegin(),1)) << endl;
    return;
  }
  cout << "No" << endl;
 
 
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