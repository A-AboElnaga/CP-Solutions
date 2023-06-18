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

100005],p_sz,el;
100005];
bool> freq;



;arr[1]=1;
++]=2;
  for(long long i=4;i<100005;i+=2){
    arr[i]=1;
  }
  for(long long i=3;i<100005/i;i+=2){
    if(arr[i]==1)continue;
    else{
      for(long long j=i*i;j<100005;j+=i+i){
        arr[j]=1;
      }
    }
  }
  for(int i=3;i<100005;i+=2){
    if(arr[i]==0)p[p_sz++]=i;
  }
}
 
void solve(){
    freq.clear();
    bool flag=0;
    for(int j=0;j<n;j++){
      cin >> el;
      if(flag) continue;
      for(int i=0;i<p_sz && p[i]<=el/p[i];i++){
        if(el%p[i]==0){
 
          if(freq.find(p[i])!=freq.end()){
            flag=1; break;
          }
          while(el%p[i]==0){
            el/=p[i];
          }
          freq[p[i]]=1;
        }
      }
      if(el>1){
        if(freq.find(el)!=freq.end()){
          flag=1;
        }
        freq[el]=1;
      }
    }
  if(flag)cout << "Yes" << endl;
  else cout << "No" << endl;
  return;
}
 
 
int main()
{
  FIn;
  // file;
  fp();
  cin >> t;
  while(t--){
    cin >> n;
    solve();
  }
  return 0;
}