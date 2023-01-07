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
  int arr[1500]{};
  int n; cin >> n;
  int rslt{};
  for(int i =0; i < n ; i++){
    int x,y; cin >> x >> y;
    x= x*60 + y;
    arr[x]+=1; rslt = max(rslt, arr[x]);
  }
  cout << rslt;
  return 0;
}