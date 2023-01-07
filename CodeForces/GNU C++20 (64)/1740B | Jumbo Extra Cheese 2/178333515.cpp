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
  int t; cin >> t;
  while(t--){
    int n;cin >> n;
    long long base=0; long long h=0;
    for(int i =0; i < n;i++){
        long long x,y; cin >> x >>y;
        base+=(min(x,y));
        h=max({x,y,h});
    }
    cout << 2*(base+h)<<endl;
  }
  return 0;
}