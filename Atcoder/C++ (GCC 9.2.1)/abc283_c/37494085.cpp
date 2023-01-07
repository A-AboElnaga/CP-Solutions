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
#include <utility>

#define FIn   cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false);
#define endl '\n'
using namespace std;


int main()
{
  FIn;
  int n; cin >> n;
  int arr[n+1]={};
  for(int i=1;i<=n;i++)cin >>arr[i];
  int q; cin >> q;
  for(int i=0;i<q;i++){
    int t; cin >>t;
    if(t==1){
      int k,x; cin>> k >> x;
      arr[k]=x;
    }
    else{
      int k; cin >> k;
      cout << arr[k] << endl;
    }
  }
  return 0;
}