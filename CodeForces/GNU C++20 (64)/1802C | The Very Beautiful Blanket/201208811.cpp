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
#include <bits/stdc++.h>
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
int t,n,m,x,y,val;
bool flag0,flag2;
void solve(){
  
cout << n*m << endl;
x=0;
for(int i=0;i<n;i++){
  y=0;flag0=0;flag2=0;
  for(int j=0;j<m;j++){
    if(flag0==0){
      flag0=1;
      val = (x<<9)+(y<<2);
      cout << val << ' ';
    }
    else{
      flag0=0;
      val = (x<<9)+(y<<2)+1;
      y+=1;
      cout << val << ' ';
    }
  }cout << endl;
  i++;
  if(i==n)break;
  y=0;
  for(int j=0;j<m;j++){
    if(flag2==0){
      flag2=1;
      val = (x<<9)+(y<<2)+2;
      cout << val << ' ';
    }
    else{
      flag2=0;
      val = (x<<9)+(y<<2)+3;
      y+=1;
      cout << val << ' ';
    }
  }cout << endl;
  x+=1;
}
}
 
int main()
{
  FIn;
  // file;
  cin >> t;
  while(t--){
    cin >> n >> m;
    solve();
  }
  
}