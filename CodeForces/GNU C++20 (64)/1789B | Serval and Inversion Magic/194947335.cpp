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
string s;
string a,b;
int l,r;
int c;
bool flag;
int main() {
  FIn;
  // file;
  cin >> t;
  while (t--) {
    cin >> n;
    cin >> s;
    if(n%2==0) c=0;
    else c=1;
    a = s.substr(0,n/2);
    b = s.substr(n/2+c,n/2);
    reverse(b.begin(),b.end());
    if(a==b) cout << "Yes" << endl;
    else{
      flag =0;
      for(int i=0;i<n/2;i++){
        if(a[i]==b[i] && flag==0) continue;
        else if(a[i]!=b[i]){
          b[i] = (1-(b[i]-'0'))+'0';
          flag=1;
        }
        else{
          break;
        }
      }
      if(a==b) cout <<"Yes" << endl;
      else cout <<"No" << endl;
    }
  }
  return 0;
}