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
 
int t,n;
int arr[105];
bool flag;
int rslt;
int main() {
  FIn;
  // file;
  cin >> t;
  while (t--) {
    cin >> n;
    flag=0;
    for(int i=0;i<n;i++){
      cin >> arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        if(i==j) continue;
        if(gcd(arr[i],arr[j])<=2){
          flag =1;
          break;
        }
      }
      if(flag) break;
    }
    if(flag) cout <<"Yes";
    else cout << "No";
    cout << endl;
  }
  return 0;
}