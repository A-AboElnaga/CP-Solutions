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
bits/stdc++.h>
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



 train_ends;

100005];
100005];


{
  FIn;
  // file; 
  cin >> t;
  while(t--){
    cin >> n >> m;
    cin >> arr[1];
    mn = arr[1];
    speed[1]=mn;
    train_ends.clear();
    for(int i=2;i<=n;i++){
      cin >> arr[i];
      if(arr[i]<mn){
        train_ends.insert(i-1);
        speed[i-1]=mn;
        mn=arr[i];
      }
      speed[i]=mn;
    }
    train_ends.insert(n);
    speed[n]=mn;
    auto it = train_ends.begin();
    auto it2=it;
    for(int i=0;i<m;i++){
        cin >> k >> d;
        arr[k]-=d;
        it = train_ends.lower_bound(k);
        d =*it;
        if(arr[k]< speed[d]){
            if(k!=1){
                auto x = train_ends.insert(k-1);
                if(x.second)
                  speed[k-1]=speed[d];
            }
            it = train_ends.lower_bound(k);
            speed[*it]=arr[k];
        }
        it2=it; it2++;
        for(;it2!=train_ends.end();it2++){
            if(speed[*it2]>=speed[*it]){
              speed[*it2]=speed[*it];
              continue;
            }
            else{break;}
        }
        it2--;
        train_ends.erase(it,it2);
        cout << train_ends.size() << ' ';
      }cout << endl;
  }
  return 0;
}
 
 