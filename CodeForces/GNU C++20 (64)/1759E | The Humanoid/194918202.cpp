<algorithm>
bits/stdc++.h>
<bitset>
<cmath>
<deque>
<functional>
<iomanip>
<iostream>
<map>
<numeric>
<queue>
<set>
<sstream>
<stack>
<string>
<unordered_set>
<utility>
<valarray>
<vector>
namespace std;

 file                                                                   \
"out.txt", "w", stdout);                                             \
"in.txt", "r", stdin)
 inf unsigned long long32_MAX
FIn                                                                    \
0);                                                                  \
(0);                                                                 \
::sync_with_stdio(false)
 endl '\n'


 h;
200005];
<int> fac{2,3,4,6,12};
<int> two{1,0,2,1,2};
<int> three{0,1,0,1,1};
,b;
 i,int rs,int g,int b,long long h){
    int loc =0;
    for(;i<n;i++){
      if(h>arr[i]){
        h+=(long long)arr[i]/2;
        rs+=1;
      }
      else if((g>0 || b>0) && h*(long long)pow(2,g)*(long long)pow(3,b) > arr[i]){
        loc = rs;
        for(int j=0;j<5;j++){
          if(h* (long long) fac[j] >arr[i] && two[j]<=g && three[j]<=b){
            rs = max(dp(i,loc,g-two[j],b-three[j],h*(long long)fac[j]),rs);
            // h*=(long long) fac[j];
            // g-=two[j]; b-=three[j];
            // h+=(long long)arr[i]/2;
            // rs+=1;
          }
        }
        break;
      }
      else{
        break;
      }
    }
    return rs;
 
}
 
 
int main() {
  FIn;
  // file;
  cin >> t;
  while (t--) {
    g=2,b=1;
    rslt =0;
    cin >> n  >> h;
    for(int i=0;i<n;i++){
      cin >> arr[i];
    }
    sort(arr,arr+n);
    rslt = dp(0,rslt,g,b,h);
 
    cout << rslt << endl;
  }
  return 0;
}