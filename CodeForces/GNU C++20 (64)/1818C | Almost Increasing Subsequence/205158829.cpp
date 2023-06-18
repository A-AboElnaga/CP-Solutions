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
<stack>
<string>
<unordered_set>
<utility>
<valarray>
<vector>
namespace std;

 file                                                                   \
"output.txt", "w", stdout);                                             \
"input.txt", "r", stdin)

FIn                                                                    \
0);                                                                  \
(0);                                                                 \
::sync_with_stdio(false)

 endl '\n'

200005];
rslt;

<int> art_points;
(){
 n >> q;
int i=1;i<=n;i++){
        cin >> a[i];
    }
    for(int i=2;i<n;i++){
        if(a[i-1]>=a[i] && a[i]>=a[i+1]){
            art_points.push_back(i+1);
        }
    }
    while(q--){
        cin >>  l >> r;
        rslt=r-l+1;
        ll= lower_bound(art_points.begin(),art_points.end(),l)-art_points.begin();
        while(ll<art_points.size() && art_points[ll]-2<l) ll+=1;
        rr= upper_bound(art_points.begin(),art_points.end(),r)-art_points.begin();
        if(ll>rr)ll=rr;
        rslt-=(rr-ll);
        cout << rslt << endl;
    }
}
int main() {
    FIn;
   // file;
     t = 1;
//    cin >> t;
    while (t--) {
        solve();
    }
}