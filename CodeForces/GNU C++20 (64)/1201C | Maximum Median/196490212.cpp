<iostream>
<iomanip>
<cstdlib>
<vector>
<cstdio>
<cassert>
<cmath>
// #include <format>
<complex>
<numeric>
<cstring>
<functional>
<fstream>
<iterator>
<map>
<unordered_map>
<string>
<set>
<unordered_set>
<bitset>
<stack>
<deque>
<queue>
<algorithm>
namespace std;

FIn                           \
 ios_base::sync_with_stdio(false); \
 cin.tie(NULL);                    \
 cout.tie(NULL);
 pf push_front
 pb push_back
 MOD % ((int)1e9 + 7)
 all(x) x.begin(),x.end()
//#define UB(v, val) upper_bound(v.begin(), v.end(), val)
unsigned int ui;
unsigned long ul;
long long ll;
unsigned long long ull;
typedef map<int, int> mpii;
typedef map<char, int> mpci;
typedef pair<int, int> pii;
 
struct triple {
 int x;
 int w;
 int ind;
};
 
struct cmp {
 bool operator()(const triple& p1, const triple& p2) const {
  return p1.x<p2.x;
 }
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
 //freopen("input.txt","r",stdin);
 //freopen("output.txt","w",stdout);
 int t=1,n,k,tmp,arr[200000]; //cin>>t;
 while (t--) {
  cin>>n>>k;
  for (int i=0; i<n; i++) cin>>arr[i];
  sort(arr,arr+n);
  int i=n/2;
  ll tot=0;
  for (; i<n-1; i++) {
   if ((i-n/2+1)<=k) {
    int minm = min((arr[i+1]-arr[i]), (k/(i-n/2+1)));
    tot+=minm, k-=minm*(i-n/2+1);
 
   } 
   else break;
  }
  if (i==n-1) {
   int minm =k/(i-n/2+1);
   tot+=minm;
  }
  cout<<tot+arr[n/2]<<"\n";
 
 }
}