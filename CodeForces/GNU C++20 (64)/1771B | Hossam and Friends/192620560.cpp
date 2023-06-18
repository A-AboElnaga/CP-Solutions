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
<sstream>
<bitset>

namespace std;

 file                       \
"out.txt", "w", stdout); \
"in.txt", "r", stdin)
 inf unsigned long long32_MAX
FIn    \
0);  \
(0); \
::sync_with_stdio(false)
 endl '\n'
 calc(int start,int r){

((long long)(r-start)*(long long)(r-start+1))/2ll;


100005];



long long rslt=0;
int main()
{
  FIn;
  // file; 
  cin >> t;
  while(t--){
    cin >> n >>m;
    for(int i=1;i<=n;i++){
      mn[i]=n;
    }
    
    for(int i=0;i<m;i++){
      cin >> x >>y;
      if(x>y) swap(x,y);
      mn[x]=min(mn[x],y-1);
    }
    rslt =n;
    for(int i = n - 1 ; i>0 ; --i)
            mn[i] = min(mn[i], mn[i + 1]);
    
    for(int i=1;i<=n;i++){
      rslt +=(mn[i]-i);
    }
    cout << rslt << endl;
  }
  return 0;
}