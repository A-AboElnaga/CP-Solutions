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

,r;
 arr[200005];
<int> zeros;
maxx;
long,int> freq;
()


zeros.empty()){
    r=zeros[0];
  }
  else{
    for(int i=1;i<=n;i++){
      if(arr[i]==0) rslt+=1;
    }
    cout << rslt << endl;
    return;
  }
  l=1;
  for(;l<r;l++){
    if(arr[l]==0){
      rslt+=1;
    }
  }
 
  for(int i=1;i<zeros.size();i++){
    r=zeros[i];
    freq.clear();
    maxx=0;
    for(;l<r;l++){
      freq[arr[l]]+=1;
      maxx=max(freq[arr[l]],maxx);
    }
    rslt+=maxx;
  }
    freq.clear();
    maxx=0;
  for(int i=r;i<=n;i++){
    freq[arr[i]]+=1;
    maxx=max(freq[arr[i]],maxx);
  }
  rslt+=maxx;
  cout << rslt << endl;
}
 
int main()
{
  FIn;
//   file;
  // t = 1;
  cin >> t;
  arr[0]=0;
  while (t--)
  { 
    zeros.clear();
    cin >> n;
    rslt=0;
    l=1;
    for(int i=1;i<=n;i++){
      cin >> arr[i];
      if(arr[i]==0){
        zeros.push_back(i);
      }
      else{
        arr[i]+=arr[i-1];
      }
    }
    solve();
  }
}