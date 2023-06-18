<algorithm>
<cmath>
<deque>
<functional>
<iomanip>
<iostream>
<map>
<numeric>
<queue>
<set>
<stack>
<string>
<unordered_set>
<utility>
<valarray>
<vector>
<bitset>
bits/stdc++.h>
namespace std;

 file                       \
"out.txt", "w", stdout); \
"in.txt", "r", stdin)

FIn    \
0);  \
(0); \
::sync_with_stdio(false)
 endl '\n'


h;
];

pair<int,int>> corners;
(){
;arr[1]=1;
 i=2;i<50;i++){
]=arr[i-1]+arr[i-2];
  }
}
bool cutter(int n,int x,int y){
  if(n==1) return true;
  if(y>arr[n]){
    y-=arr[n];
    return cutter(n-1,y,x);
  }
  if(arr[n+1]-y>=arr[n]){
    return cutter(n-1,y,x);
  }
  return false;  
}
 
void solve()
{ 
  cin >> n >> x >> y;
  if(cutter(n,x,y)) cout << "Yes" << endl;
  else cout << "No" << endl;
}
 
int main()
{
  FIn;
  // file;
  // t = 1;
  pre();
  cin >> t;
  while (t--)
  { 
    solve();
  }
}