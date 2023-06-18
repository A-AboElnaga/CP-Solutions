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
 
int t;
int x,y;
const int maxx=10000005;
int spf[maxx];
int c,rslt,tmp;
void SPF(){
  for(int i=0;i<maxx;i++){
    spf[i]=i;
  }
  for(int i=2;i<maxx;i+=2){
    spf[i]=2;
  }
  for(long long i=3;i*i<maxx;i+=2){
    for(int j=i;j<maxx;j+=i){
      spf[j]=min(spf[j],(int)i);
    }
  }
}
 
void solve(){
  c = y-x;
  rslt=INT_MAX;
  while(c>1){
    tmp=spf[c];
    while(c%tmp==0){
      c/=tmp;
    }
    tmp=(tmp-x%tmp)%tmp;
    rslt=min(rslt,tmp);
  }
  if(rslt==INT_MAX)rslt=-1;
  cout << rslt << endl;
}
 
 
int main()
{
  FIn;
  // file;
  // t=1;
  SPF();
  cin >> t;
  while(t--){
    cin >> x >> y;
    if(x>y){
      swap(x,y);
    }
    // if(gcd(y,x)!=1){
    //   cout << 0 << endl;
    //   continue;
    // }
    // else if(y-x==1){
    //   cout << -1 << endl;
    //   continue;
    // }
    solve();
  }
}