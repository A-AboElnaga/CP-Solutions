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


300005];
300005];
 mx,summ;

()

1;
){
    cout << "No" << endl;
    return;
  }
  int i=0;
  while(i<n){
    if(summ+arr[r]>=mx){
        rslt[i]=arr[l];
        summ=max(0ll,summ+arr[l++]);
    }
    else{
      rslt[i]=arr[r];
      summ+=arr[r--];
    }
    i++;
    if(summ>=mx){
      cout <<"No" << endl;
      return;
    }
  }
 
  cout << "Yes" <<endl;
  for(i=0;i<n;i++){
    cout << rslt[i] << ' ';
  }cout << endl;
}
 
int main()
{
  FIn;
  // file;
  // t = 1;
  cin >> t;
  while (t--)
  { 
    cin >> n;
    for(int i=0;i<n;i++){
      cin >> arr[i];
    }
    sort(arr,arr+n);
    mx=arr[n-1]-arr[0];
    solve();
  }
}