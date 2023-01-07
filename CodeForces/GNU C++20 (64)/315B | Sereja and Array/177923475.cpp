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
  int n , m; cin >> n >> m;
  vector<long long> v(n+1);
  for(int i =1; i <= n; i ++){
    cin >> v[i];
  }
  long long sm=0;
  for(int i=0; i < m; i ++){
    int t; cin >> t;
    if (t==1){int indx,x; cin >> indx >>x; v[indx]=x-sm;}
    else if(t==2) {long long y; cin >> y; sm+=y;}
    else{ int q; cin >> q; cout << v[q]+sm << endl;}
    }
  return 0;
}