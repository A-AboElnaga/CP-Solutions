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

int n; string s;
int main()
{
  FIn;
  // file;
  cin  >> n >> s;
  char x = s[0];
  cout << x;
  for(int i=1;i<n;i++){
    if(s[i]=='a' && x=='n' ){
      cout <<'y';
    }
    x= s[i];
    cout << x;
  }
  return 0;
}