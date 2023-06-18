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


int> arr[26];
 loc_sum,rslt;
26];
distinct;

26];
 to_add;
map<char,int> freq;
void solve(){
  to_add.clear();
  for(int i=0;i<distinct;i++){
      keep[arr[i].second]=1;
      freq['a'+arr[i].second]=arr[i].first;
      if(arr[i].first<x){
        to_add.insert('a'+arr[i].second);
      }
  }
  for(int i=distinct;i<26;i++){
        keep[i]=0;
        freq[('a'+arr[i].second)]=-1;
  }
  for(int i=0;i<n;i++){
    if(freq[s[i]]==-1){
      c=*to_add.begin();
      s[i]=c;
      if(++freq[c]==x){
        to_add.erase(c);
      }
    }
    else if(freq[s[i]]>x){
      c=*to_add.begin();
      freq[s[i]]-=1;
      s[i]=c;
      if(++freq[c]==x){
        to_add.erase(c);
      }
    }
  }
  cout << s << endl;
 
}
 
 
int main()
{
  FIn;
  // file;
  cin >> t;
  while(t--){
    cin >> n;
    cin >> s;
    rslt=20000005;
    for(int i=0;i<26;i++){
      arr[i]={0,i};
    }
    for(auto c:s){
      arr[c-'a'].first+=1;
    }
    sort(arr,arr+26);
    reverse(arr,arr+26);
    s_arr[0]=arr[0].first;
    for(int i=1;i<26;i++){
      s_arr[i]=arr[i].first+s_arr[i-1];
    }
    for(int i=1;i<=min(26,n);i++){
      if(n%i!=0)continue;
      loc_sum=0;
      x=n/i;
      for(int j=0;j<i;j++){
        loc_sum+=abs(arr[j].first-x);
      }
      loc_sum+=n-s_arr[i-1];
      loc_sum/=2;
      if(loc_sum<rslt){
        rslt=loc_sum;
        distinct=i;
      }
    }
    cout << rslt << endl;
    x=n/distinct;
    solve();
  }
  return 0;
}