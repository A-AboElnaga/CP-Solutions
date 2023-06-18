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
#include <bitset>
#include <bits/stdc++.h>
using namespace std;
 
#define file                       \
  freopen("out.txt", "w", stdout); \
  freopen("in.txt", "r", stdin)
#define inf unsigned long long32_MAX
#define FIn    \
  cin.tie(0);  \
  cout.tie(0); \
  ios_base::sync_with_stdio(false)
// #define endl '\n'
int t,n;
int arr[5005];
int rsl[5005];
 
void solve(){
    int mx=1;
 
    if(arr[0]!=1){
      cout << "No" << endl;
      return;
    }
    for(int i=1;i<n;i++){
      if(arr[i]<=mx){
        mx+=arr[i];
      }
      else{
        cout << "No" << endl;
        return;
      }
    }
    cout << "Yes" << endl;
}
 
 
int main()
{
  FIn;
  // file;
  // t=1;
  cin >> t;
  while(t--){
    cin >> n;
    for(int i=0;i<n;i++){
      cin >> arr[i];
    }
    sort(arr,arr+n);
    solve();
  }
}