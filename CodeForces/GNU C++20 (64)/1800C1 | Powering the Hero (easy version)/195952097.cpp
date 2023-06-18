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
int t,n,x;
long long rslt;
multiset<int> st;
int main() {
  FIn;
  // file;
  cin >>t;
  while(t--){
    cin >> n;
    rslt =0;
    for(int i=0;i<n;i++){
        cin >> x;
        if(x>0) st.insert(x);
        else{
          if(st.size()>0){
            rslt+=(long long)(*st.rbegin());
            st.erase(prev(st.end()));
          }
        }
    }
    st.clear();
    cout << rslt << endl;
  }
 return 0;
}