#include <algorithm>
#include <cmath>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_set>
#include <utility>
#include <valarray>
#include <vector>
#include <sstream>
#include <bitset>

using namespace std;

#define file                       \
  freopen("out.txt", "w", stdout); \
  freopen("in.txt", "r", stdin)
#define inf unsigned long long32_MAX
#define FIn    \
  cin.tie(0);  \
  cout.tie(0); \
  ios_base::sync_with_stdio(false)
#define endl '\n'


int n,arr[101],p,q,r,s;
int main()
{
  FIn;
  //file;
  cin >> n; 
  cin >> p >> q >> r >> s;
  for(int i =1;i<=n;i++){
    cin >> arr[i];
  }
  //before p;
  for(int i=1;i<p;i++){
    cout << arr[i] << ' ';
  }
  //from r to s
  for(int i=r;i<=s;i++){
    cout << arr[i] << ' ';
  }
  //from Q to r
  for(int i=q+1;i<r;i++){
    cout << arr[i] << ' ';
  }
  //from p to q;
  for(int i=p;i<=q;i++){
    cout << arr[i] << ' '; 
  }
  //from s to end
  for (int i =s+1;i<=n;i++){
    cout << arr[i] << ' '; 
  }
  return 0;
}