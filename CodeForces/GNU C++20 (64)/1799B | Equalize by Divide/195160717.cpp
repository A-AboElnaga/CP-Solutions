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



105];
 onlyones;
 containones;



int mn;
int cn;
set<int> st;
vector<pair<int,int>> rslt;
int main()
{
  FIn;
  // file;
  cin >> t;
  while(t--){
    cin >> n;
    st.clear();
    rslt.clear();
    mn = (int) 1e9+2;
    for(int i=1;i<=n;i++){
      cin >> arr[i];
      st.insert(arr[i]);
      if(arr[i]<mn){
          a=i;
          mn == arr[i];
      }
    }
    cn=1;
    if(st.size()==1) cout << 0 << endl;
    else{
      if(*st.begin()==1) cout << -1 << endl;
      else{
          while(cn<n){
            for(int i=1;i<=n;i++){
              while(arr[i]>arr[a]){
                rslt.push_back({i,a});
                if(arr[i]%arr[a]>0) c=1;
                else c=0;
                arr[i]=arr[i]/arr[a] + c;
              }
              if(arr[i]<mn){
                mn = arr[i];
                b = i;
              }
            }
            a=b;
            cn=0;
            for(int i=1;i<=n;i++){
              if(arr[i]==mn){cn+=1;}
            }
          }
          n= rslt.size();
          cout << n << endl;
          for(int i=0;i<n;i++){
            cout << rslt[i].first << ' ' << rslt[i].second << endl;
          }
 
        }
      }
    }
  return 0;
}