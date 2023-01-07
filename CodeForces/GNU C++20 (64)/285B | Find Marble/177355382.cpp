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
 
 
 
int main()
{
  FIn;
  int n,s,t; cin >> n >> s >>t;
  vector<int> v(n+1);
  for(int i=1; i <= n ; i++) cin >> v[i];
  if(s==t){cout << 0; return 0;}
  int x=v[s];int steps=1;
  while(x!=t && x!=s  ){
    x=v[x];
    steps+=1;
  }
  if(x==s) cout << -1;
  else cout << steps;
 
  return 0;
}