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
 
 
int t,n,m;
int x;
int twos,fives;
long long rslt;
void to2_5(){
  while(x%2==0){
    x/=2;
    twos+=1;
  }
  while(x%5==0){
    x/=5;
    fives+=1;
  }
 
}
int main() {
  FIn;
  // file;
  cin >> t;
  while (t--){
    cin >> n >> m;
    twos=0;fives=0;
    x=n; to2_5();
    rslt =1;
    x= min(twos,fives);
    twos-=x; fives-=x;
    for(int i=0;i<twos && rslt*5ll<=m;i++){
      rslt*=5ll;
    }
 
    for(int i=0;i<fives && rslt*2ll<=m;i++){
      rslt*=2ll;
    }
    while(rslt*10ll<=m){
      rslt*=10ll;
    }
 
    rslt = (m/rslt)*rslt;
    rslt = (long long)n * rslt;
    cout << rslt << endl;
 
  }
  return 0;
}