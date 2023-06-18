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

using namespace std;

#define file                       \
  freopen("out.txt", "w", stdout); \
  freopen("in.txt", "r", stdin)
#define inf unsigned long long32_MAX
#define FIn    \
  cin.tie(0);  \
  cout.tie(0); \
  ios_base::sync_with_stdio(false)
#define endl '\n'

int n,a,b; string s;
long long rslt=9223372036854775807ll,loc=0;

void solve(string &s){
  for(int i =0;i<n/2;i++){
    if(s[i]!=s[n-1-i]){
      loc+=b;
     }
  }
  rslt= min(loc,rslt);
}

int main()
{
  FIn;
  // file;
  cin >> n >> a >> b;
  cin >> s; 
  solve(s);
  long long a_v= 0;
  for(int i =0;i<=n/2;i++){
    a_v+=a;
    s=s.substr(1,n-1)+s[0];
    loc = a_v;
    solve(s);
  }
  cout << rslt << endl;
  return 0;
}