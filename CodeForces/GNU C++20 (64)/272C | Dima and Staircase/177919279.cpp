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
  int n; cin >> n;
  vector<long long> v(n);
  for(int i =0; i < n ;i ++)
    cin >> v[i];
  int m; cin >> m;
  for(int i =0;i<m;i++){
    long long w,h; cin >> w >> h;
    v[0]= max(v[w-1],v[0]);
    cout << v[0]<< endl;
    v[0]+=h;
  }
  return 0;
}