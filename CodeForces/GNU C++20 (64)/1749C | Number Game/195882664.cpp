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
 
int t;
int n;
int c1;
int rslt;
int arr[102];
 
bool test(int k){
  if(2*k>n+1) return false;
  for(int i=1;i<=k;i++){
    if(arr[i+k-1]>i)return false;
  }
  return true;
}
 
 
int main() {
  FIn;
  // file;
  cin >> t;
  while (t--) {
    cin >> n;
    rslt=0;
    for(int i=1;i<=n;i++){
      cin >> arr[i];
    }sort(arr+1,arr+n+1);
    if(n==1){cout << 1 << endl; continue;}
    for(int i=1;i<=n;i++){
      if(!test(i)){
        rslt=i-1;
        break;
      }
    }
    cout << rslt << endl;
  }
  return 0;
}