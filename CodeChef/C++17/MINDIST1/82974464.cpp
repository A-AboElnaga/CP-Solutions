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
  int t; cin >> t;
  while(t--){
    pair<int,int> pr={0,0};
    int n;cin >> n;
    char x;
    for(int i=0;i<n;i++){
      cin >> x;
      if(x-'0'==1){
        if(i&1)pr.second+=1;
        else pr.first+=1;
      }
    }
    if(pr.second >=1 && pr.first>=1) cout << 1;
    else cout << 2;
    cout << endl;
  }
  return 0;
}