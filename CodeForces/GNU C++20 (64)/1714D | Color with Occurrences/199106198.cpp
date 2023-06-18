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
 inf unsigned long long32_MAX
FIn    \
0);  \
(0); \
::sync_with_stdio(false)
 endl '\n'


string word,subword;
string space[10];
pair<int/**/,int/**/>> rslt;
Maxx;
;
()

Maxx=0;
  rslt.clear();
  while(r<word.size()){
    id=-1;pos=-1;
    for(int i=l;i<=r;i++){
      for(int j=0;j<n;j++){
        subword=space[j];
        if(i+subword.size()<=word.size() && i+subword.size()>=r && word.substr(i,subword.length())==subword){
            if(i+subword.size()>Maxx){
              Maxx=i+subword.size();
              id=j;
              pos=i;
            }
        }
      }
    }
    if(id==-1){
      cout << "-1" << endl;
      return;
    }
    rslt.push_back({id+1,pos+1});
    l=max(pos+1,r+1);
    r=Maxx;
  }
  cout << rslt.size() << endl;
  for(auto el:rslt){
    cout << el.first << ' ' << el.second << endl;
  }
}
 
int main()
{
  FIn;
  // file;
  // t = 1;
  cin >> t;
  while (t--)
  { cin >> word >>  n;
    for(int i=0;i<n;i++){
      cin >> space[i];
    } 
    solve();
  }
}