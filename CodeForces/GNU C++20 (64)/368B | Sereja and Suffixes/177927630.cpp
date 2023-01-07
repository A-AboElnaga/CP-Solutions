#include <iostream>
#include <string>
#include <iomanip>
#include <numeric>
#include <cmath>
#include <vector>
#include <algorithm>
#include <set>
#include <valarray>
#include <queue>
#include <unordered_set>
#include <map>
#include <stack>
#include <deque>
 
#define FIn    cin.tie(0);  cout.tie(0); ios_base::sync_with_stdio(false);
#define endl '\n'
using namespace std;
 
long fac(int x){
  long rslt = 1;
  for(int i=1; i <= x; i++){
    rslt*=i;
  }
  return rslt;
}
 
int main()
{
  FIn;
  int n,m; cin >> n >> m;
  set<int> s;
  vector<int> v(n);
  for(int i =0 ; i < n ; i ++){
    cin >> v[i];
  }
  vector<int> rslt;
  for(int i=v.size()-1; i>=0;i--){
    s.insert(v[i]);
    rslt.push_back(s.size());
  }
  for(int i =0 ; i < m; i ++){
    int x; cin >> x;
    cout << rslt[n-x]<<endl;
  }
 
  return 0;
}