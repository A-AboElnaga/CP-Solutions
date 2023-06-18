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
200005]={0};
<int> elements[200005];






;
--)
  {
    int n; cin >> n;
    for(int i=0;i<n;i++){
      int k; cin >> k;
      for(int j=0;j<k;j++){
        int x; cin >> x;
        freq[x]+=1;
        elements[i].push_back(x);
      }
    }
    bool can_be_removed =1;
    vector<int> el;
    el.clear();
    for(int i=0;i<n;i++){
      el= elements[i];
      can_be_removed=1;
      for(int value:el){
          if(freq[value]==1){
            can_be_removed=0;
            break;
          }
      }
      if(can_be_removed) break;
    }
    if(can_be_removed) cout << "YES" << endl;
    else cout << "NO" << endl;
    for(int i=0;i<n;i++){
      for(int j=0;j<elements[i].size();j++){
        freq[elements[i][j]]=0;
      }
      elements[i].clear();
    }
  }
 
  return 0;
}