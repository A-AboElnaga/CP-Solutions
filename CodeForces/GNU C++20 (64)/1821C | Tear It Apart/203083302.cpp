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


,s;
string new_s;
26];


best;

void solve(){
  cin >> s_o;
  n=s_o.size();
  for(int i=0;i<26;i++){
    freq[i]=0;
  }
  for(int i=0;i<n;i++){
    freq[s_o[i]-'a']+=1;
  }
  best = n-1;
  new_s.clear();
  for(int j=0;j<26;j++){
    if(freq[j]==0)continue;
    x=-3;
    s=s_o;
    n=s.size();
    rslt=0;
    mx='a'+j;
    flag=1;
    while(flag){
      x=-2;
      flag=0;
      for(int i=0;i<n;i++){
        if(s[i]==mx)new_s.push_back(s[i]);
        else{
          flag=1;
          if(x+1<i){
            x=i;
          }
          else{
            new_s.push_back(s[i]);
          }
        }
      }
      if(flag==1){
        rslt+=1;
      }
      s=new_s;
      n=s.size();
      new_s.clear();
    }
    best=min(best,rslt);
  }
  cout << best << endl;
};
 
int main() {
  FIn;
  // file;
  // t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
}