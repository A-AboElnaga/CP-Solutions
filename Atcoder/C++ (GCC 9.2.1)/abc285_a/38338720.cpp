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
#include <sstream>
#include <bitset>

using namespace std;

#define file                       \
  freopen("out.txt", "w", stdout); \
  freopen("in.txt", "r", stdin)
#define inf unsigned long long32_MAX
#define FIn    \
  cin.tie(0);  \
  cout.tie(0); \
  ios_base::sync_with_stdio(false)
#define endl '\n'
int n;string s;

int main()
{
  FIn;
  // file;  
  cin >> n >> s;
  for(int i=1;i<n;i++){
    bool flag=1;
    for(int k=0;k+i<=n;k++){
      if(s[k]==s[k+i]){
        cout << k << endl;
        flag=0;
        break;
      }
    }
    if(flag){
      cout <<n-i << endl; 
    }
  }
  return 0;
}