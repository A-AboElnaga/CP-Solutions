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
 
#define FIn    \
  cin.tie(0);  \
  cout.tie(0); \
  ios_base::sync_with_stdio(false);
#define endl '\n'
using namespace std;
 
 
int main()
{
  FIn;
  int t; cin >>t;
  while(t--){
    int m; cin >> m;
    vector<long long> row1(m+1,0);
    vector<long long> row2(m+1,0);
    for(int i=1; i <=m; i++){
      cin >> row1[i];
      row1[i]+=row1[i-1];
    }
    for(int i=1; i <= m; i++){
      cin >> row2[i];
      row2[i]+=row2[i-1];
    }
    long long bob=*row1.rbegin()+*row2.rbegin(),alice=0,curr=0;
    for(int i=1; i<=m;i++){
        curr = max({row1[m]-row1[i],row2[i-1]-row2[0]});
        if(curr<bob){
          bob = max({row1[m]-row1[i],row2[i-1]-row2[0]});
        }
    }
    cout << bob << endl;
 
 
  }
  return 0;
}
 
 
                               