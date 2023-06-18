#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>
#include <climits>
#include <cstdio>
#include <cassert>
 
// For ordered_set
// #include <ext/pb_ds/assoc_container.hpp> // Common file
// #include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
 
#include <cmath>
// #include <format>
#include <complex>
#include <numeric>
#include <cstring>
#include <functional>
#include <fstream>
#include <iterator>
#include <map>
#include <unordered_map>
#include <string>
#include <set>
#include <unordered_set>
#include <bitset>
#include <stack>
#include <deque>
#include <queue>
#include <algorithm>
using namespace std;
 
// For ordered_set
//using namespace __gnu_pbds;
 
//template<class T> using ordered_set = tree<T, null_type , less<T> , rb_tree_tag , tree_order_statistics_node_update>;
 
#define FIn                           \
 ios_base::sync_with_stdio(false); \
 cin.tie(NULL);                    \
 cout.tie(NULL);
 
#define freopen \
  freopen("input.txt","r",stdin); \
  freopen("output.txt","w",stdout);
#define pf push_front
#define pb push_back
#define MOD % ((int)1e9 + 7)
#define all(x) x.begin(),x.end()
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
//#define UB(v, val) upper_bound(v.begin(), v.end(), val)
typedef unsigned int ui;
typedef unsigned long ul;
typedef long long ll;
typedef unsigned long long ull;
typedef map<int, int> mpii;
typedef map<char, int> mpci;
typedef pair<int, int> pii;
 
struct quad {
 int x1;
 int y1;
 int x2;
 int y2;
};
 
/*
If Stuck:
    1- State the problem
    2- Look for useful observations/constraints
    3- Don't stick to only one approach
WA:
    1- int overflows
    2- special cases (n=0,1)
 3- Behaviour at boundaries
 4- Homemade cases
*/
 
int main() {
 FIn;
 //freopen;
 int t=1,n,m,tmp; //cin>>t;
 string str;
 char c;
 while (t--) {
  char mat[26][26];
  int pre[26][26]={0};
  cin>>n>>m;
  for (int i=1; i<=n; i++) {
   for (int j=1; j<=m; j++) {
    cin>>mat[i][j];
   }
  }
 
  for (int i=1; i<=n; i++) {
   for (int j=1; j<=m; j++) {
    pre[i][j]=pre[i-1][j]+pre[i][j-1]-pre[i-1][j-1]+(mat[i][j]-'0');
   }
  }
//   for (int i=0; i<=n; i++) {
//    for (int j=0; j<=m; j++) {
//     cout<<pre[i][j]<<" ";
//    }
//    cout<<"\n";
//   }
  int maxm = 0;
  for (int x1=1; x1<=n; x1++) {
   for (int y1=1; y1<=m; y1++) {
    for (int x2=x1; x2<=n; x2++) {
     for (int y2=y1; y2<=m; y2++) {
      int sum = pre[x2][y2]-pre[x1-1][y2]-pre[x2][y1-1]+pre[x1-1][y1-1];
 
      if (!sum) {
       maxm = max(maxm, 2*(x2-x1+y2-y1+2));
      }
     }
    }
   }
  }
  cout<<maxm<<"\n";
 }
}