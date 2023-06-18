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

FIn    \
0);  \
(0); \
::sync_with_stdio(false)
 endl '\n'



];



(int l,int r,int k){
 r-l+1;

    arr[l]=-1000;
  }
  //base cases
  if(k==0){
    for(int i=l;i<=r;i++){
      arr[i]=-1000;
    }
    return;
  }
  if(n*(n+1)/2==k){
    for(int i=l;i<=r;i++){
      arr[i]=1;
    }
    return;
  }
  if(n==2){
    if(k==1){
      arr[l]=-1000;arr[r]=1;
    }
    if(k==2){
      arr[l]=-1;arr[r]=2;
    }
    if(k==3){
      arr[l]=1;arr[r]=1;
    }
    return;
  }
  // if(n==3){
  //   if(k==1)arr[l]=-1000,arr[l+1]=-1000,arr[r]=1;
  //   if(k==2)arr[l]=1,arr[l+1]=-1000,arr[r]=1;
  //   if(k==3)arr[l]=1,arr[l+1]=1,arr[r]=-1000;
  //   if(k==4)arr[l]=-2,arr[l+1]=1,arr[r]=2;
  //   if(k==5)arr[l]=2,arr[l+1]=-1,arr[r]=2;
  // }
  if(n*(n+1)/2>k && n*(n-1)/2<k){
    for(int i=l+1;i<=r;i++){
      arr[i]=1;
    }
    arr[l]=-((n-1)-(k-(n*(n-1))/2))-1;
    arr[r-(k-((n*(n-1))/2))+1]=2;
    return;
  }
  for(int i=l;i<=r;i++){
    if(((i-l)*(i-l+1)/2)+((r-i)*(r-i+1)/2)>=k){
      arr[i]=-1000;
      if(((r-i)*(r-i+1))/2>=(k-(min(k,(i-l)*(i-l+1)/2)))){
        solve(l,i-1,min(k,(i-l)*(i-l+1)/2));
        solve(i+1,r,k-(min(k,(i-l)*(i-l+1)/2)));
      }
      else{
        solve(l,i-1,k-min(k,(r-i)*(r-i+1)/2));
        solve(i+1,r,min(k,(r-i)*(r-i+1)/2));        
      }
      return;
    }
  }
}
 
 
int main()
{
  FIn;
  // file;
  // t = 1;
  cin >> t;
  while(t--){
    cin >> n >> k;
    for(int i=1;i<=n;i++)arr[i]=0;
    solve(1,n,k);
    for(int i=1;i<=n;i++){
      cout << arr[i] << ' ';
    }cout << endl;
  }
}