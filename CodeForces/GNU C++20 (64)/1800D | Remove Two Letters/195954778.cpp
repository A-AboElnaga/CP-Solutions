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
int t,n,cc;
int rslt;
char x,c;
string tmp;
int main() {
  FIn;
  // file;
  cin >>t;
  while(t--){
    cin >> n;
    cin >> tmp;
    rslt=n-1;
    for(int i=1;i<n-1;i++){
      if(tmp[i-1]==tmp[i+1])rslt-=1;
    }
    cout << rslt << endl;
  }
 return 0;
}