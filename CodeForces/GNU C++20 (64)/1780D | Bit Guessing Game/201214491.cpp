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
// #define endl '\n'
int t,n;int cnt,ignored,x;
bool borrow_f,ret;
int rslt,bit_val;
void solve(){
  cin >> cnt;
  x=cnt;
  rslt=0,bit_val=1;
  borrow_f=0;
  ret=0;
  ignored=0;
  while((cnt-ignored)!=0){
    cout << "- " << bit_val<<endl;
    cin>>cnt;
    if(cnt==-1){
      ret=1;
      return;
    }
    //val*=2; rslt ,x
    if(borrow_f){
      if(cnt>=x){
        rslt+=bit_val;
        ignored+=1;
      }
    }
    else{
      if(cnt>=x){
        borrow_f=1;
        ignored+=1;
      }
      else{
        rslt+=bit_val;
      }
    }
    x=cnt;
    bit_val*=2;
  }
  if(borrow_f){
    rslt+=bit_val;
  }
  cout <<  "! "<< rslt << endl;
}
 
int main()
{
  FIn;
  // file;
  // t = 1;
  cin >> t;
  while(t--){
    solve();
    if(ret) return 0;
  }
}