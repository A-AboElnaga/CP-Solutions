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
  int n, l, r, x;
  cin >> n >> l >> r >>x;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
 
  int rslt = 0;
  int mask = (1 << n);
  for (int i = 1; i <=mask; i++)
  {
    int total=0,mn=10e6,mx=0; bool flag=1;
    for (int j = 0; j <n; j++)
    {
      if (i & (1 << j))
      {
        int tx= v[j];
        if(total+tx<=r)
        {total+=tx;
        mn=min(tx,mn);
        mx=max(tx,mx);}
        else{
          flag=0;
          break;
        }
        }
      }
    if(flag && mn<total && total>=l && total<=r && mx-mn>=x){
      rslt+=1;
    }  
    }
  
  cout << rslt;
  return 0;
}
 
                               