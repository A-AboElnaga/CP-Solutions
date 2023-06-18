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


int main()
{ 
  FIn; 
  //file;
  int n,q; cin >> n >> q;
  vector<long long> v(n+1);
  vector<long long> sm(n+1);
  v[0]=0;
  for(int i =1;i<=n;i++){
    cin >> v[i];
  }
  sort(v.begin(),v.end());

  for(int i=1;i<=n;i++){
    sm[i]+=sm[i-1]+v[i];
  }
  for(int i=1;i<=q;i++){
    long long x; cin >> x;
    auto it = upper_bound(v.begin(),v.end(),x);
    int ind = distance(v.begin(),it)-1;
    long long rslt = abs((ind)*x - sm[ind]) + abs((n-ind)*x - (sm[n]-sm[ind]));
    cout << rslt << endl;
  }

return 0;
}