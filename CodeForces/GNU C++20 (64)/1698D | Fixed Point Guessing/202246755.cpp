#include <algorithm>
#include <bits/stdc++.h>
#include <bitset>
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
using namespace std;
 
#define file                                                                   \
  freopen("out.txt", "w", stdout);                                             \
  freopen("in.txt", "r", stdin)
 
#define FIn                                                                    \
  cin.tie(0);                                                                  \
  cout.tie(0);                                                                 \
  ios_base::sync_with_stdio(false)
 
// #define endl '\n'
 
int t, n;
int l,m,r;
int arr[10004];
bool wa;
int mn,mx,x;
void ask(int a,int b){
  cout << '?' << ' ' <<  a << ' ' << b  << endl; 
}
void answer(int a){
  cout << "! " << a << endl;
}
 
void read(int a){
  cin >> arr[0];
  if(arr[0]==-1){
    wa=1;
    return;
  }
  for(int i=1;i<a;i++){
    cin >> arr[i];
  }
 
}
void check(int a){
  mn=l,mx=l+a-1;
  x=0;
  for(int i=0;i<a;i++){
    if(arr[i]<=mx && arr[i]>=mn){
      x+=1;
    }
  }
  if(x%2==0){
    l=m+1;
  }
  else{
    r=m;
  }
}
 
void solve() {
  cin >> n;
  wa=0;
  l=1,r=n;
  while(l<r){
    m=(l+r)/2;
    ask(l,m);
    read(m-l+1);
    check(m-l+1);
  }
  if(wa)return;
  answer(l);
}
 
 
int main() {
  FIn;
  // file;
  // t = 1;
  cin >> t;
  while (t--) {
    solve();
    if(wa) return 0;
  }
}