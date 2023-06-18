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
#include <sstream>
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
#define inf unsigned long long32_MAX
#define FIn                                                                    \
  cin.tie(0);                                                                  \
  cout.tie(0);                                                                 \
  ios_base::sync_with_stdio(false)
#define endl '\n'
 
 
int t, n;
int arr[200005];
int o,no;
int main() {
  FIn;
  // file;
  cin >> t;
  int counter;
  while (t--){
    cin >> n;
    o=0,no=0;
    for(int i=1;i<=n;i++){
      cin >> arr[i];
      if(arr[i]==1) o+=1;
      else no+=1; 
    }
    if(n&1) cout <<"-1" << endl;
    else{
      if(no == o){
        cout << n << endl;
        for(int i=1;i<=n;i++){
          cout << i << ' ' << i << endl;
        }
      } 
      else if(o> no){
        counter = (o-no)/2;
        no = no + no + counter;
        cout << no << endl;
        for(int i=1;i<=n;i++){
          if(counter > 0 && arr[i]==1 && arr[i+1]==1){
            counter-=1;
            cout << i << ' ' << ++i << endl;
          }
          else{
            cout << i << ' ' <<   i << endl;
          }  
        }
      }
      else{
        counter = (no-o)/2;
        o  = o + o + counter;
        cout <<  o << endl;
        for(int i=1;i<=n;i++){
          if(counter > 0 && arr[i]==-1 && arr[i+1]==-1){
            counter-=1;
            cout << i << ' ' << ++i << endl;
          }
          else{
            cout << i << ' ' <<   i << endl;
          }  
        }
      }
    }
  }
  return 0;
}