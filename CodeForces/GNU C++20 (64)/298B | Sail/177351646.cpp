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
  int n,m;
  int  t, sx, sy, ex, ey; cin >> t >> sx >> sy >> ex >> ey;
  char e_w,n_s; int stepsx=0,stepsy=0;
  if(ex>=sx){e_w='E'; stepsx= ex-sx;}
  else      {e_w='W'; stepsx= sx-ex;}
  if(ey>=sy){n_s='N'; stepsy= ey-sy;}
  else      {n_s='S'; stepsy= sy-ey;}
  int i=0;
  string s; cin >>s;
  while(stepsx+stepsy && i <s.size()){
    if(s[i]==e_w && stepsx>0)stepsx-=1;
    else if(s[i]==n_s && stepsy>0)stepsy-=1;
    i++;
  }
  if(stepsx+stepsy && i>=s.size()) cout << -1;
  else cout << i;
  
  return 0;
}