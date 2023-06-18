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
int upper[26];
int lower[26];
int t,n,k;
int rslt,tmp;
char x;
int main() {
  FIn;
  // file;
  cin >> t;
  while(t--){
    cin >> n >> k;
    rslt=0;
    for(int i=0;i<26;i++){
      upper[i]=0;
      lower[i]=0;
    }
    for(int i=0;i<n;i++){
      cin >>x;
      if(x>='a'){
        lower[x-'a']+=1;
      }
      else{
        upper[x-'A']+=1;
      }
    }
    for(int i=0;i<26;i++){
        tmp=min(upper[i],lower[i]);
        upper[i]-=tmp;lower[i]-=tmp;
        rslt+=tmp;
        if(max(upper[i],lower[i])>1 && k>0){
          tmp=min(max(upper[i],lower[i])/2,k);
          k-=tmp;
          rslt+=tmp;
        }
    }
      cout << rslt << endl;
    }
 return 0;
}