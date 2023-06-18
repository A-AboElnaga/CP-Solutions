#include <algorithm>
#include <cmath>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_set>
#include <utility>
#include <valarray>
#include <vector>
#include <bitset>
#include <bits/stdc++.h>
using namespace std;
 
#define file                       \
  freopen("out.txt", "w", stdout); \
  freopen("in.txt", "r", stdin)
 
#define FIn    \
  cin.tie(0);  \
  cout.tie(0); \
  ios_base::sync_with_stdio(false)
#define endl '\n'
 
int t;
long long n,c,d;
long long rslt,loc;
int arr[200005];
int val=1;
long long work(int i,int loc_val){
  long long rs_loc=0;
  if(i==n){
    return 0;
  }
  if(arr[i]==loc_val){
    return work(i+1,loc_val+1);
  }
  if(arr[i]<loc_val){
    rs_loc=c+work(i+1,loc_val);
  }
  else{
    rs_loc=min(work(i+1,arr[i]+1)+(d*(arr[i]-loc_val)),c*(n-i));
  }
  return rs_loc;
}
 
void solve()
{  
  cin >> n >> c >> d;
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  sort(arr,arr+n);
  rslt=(c*n)+d;
  if(arr[0]==1)
  rslt=min(rslt,work(0,1));
  else{
    rslt=min(rslt,d+work(0,2));
  }
  cout << rslt << endl;
}
 
int main()
{
  FIn;
  // file;
  // t = 1;
  cin >> t;
  while (t--)
  { 
    solve();
  }
}