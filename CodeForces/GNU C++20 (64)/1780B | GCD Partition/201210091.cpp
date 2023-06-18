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
int t,n; long long x;
long long arr[200005];
void solve(){
  cin >> n;
  arr[0]=0;
  for(int i=1;i<=n;i++){
    cin >> arr[i];
    arr[i]+=arr[i-1];
  }
  x=1;
  for(int i=1;i<n;i++){
    x=max(x,gcd(arr[i],arr[n]-arr[i]));
  }
  cout << x << endl;
 
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