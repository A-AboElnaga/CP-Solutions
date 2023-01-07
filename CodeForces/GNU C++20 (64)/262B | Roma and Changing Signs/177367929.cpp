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
  int n,k; cin >> n >> k;
  vector<int> neg;
  long sm_neg{};
  long sm_pos{};
  int mn =1000000;
  for(int i =0 ; i < n; i++){
    int x; cin >> x;
    mn = min(mn,abs(x));
    if(x>=0) {sm_pos+=x;}
    else     {neg.push_back(-x); sm_neg-=x;}
  }
  if(k==neg.size())cout << sm_neg+sm_pos;
  else if(k<neg.size()) cout << sm_pos-sm_neg+ 2* accumulate(neg.begin(),next(neg.begin(),k),0);
  else cout << sm_neg+sm_pos-((k-(int) neg.size())%2)*mn*2; 
 
  return 0;
}