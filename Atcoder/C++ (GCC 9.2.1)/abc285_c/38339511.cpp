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
string s;
int main()
{
  FIn;
  // file;  
  cin >> s;
  long long rslt=0;
  long long  ind = 1;
  for(auto it=s.rbegin();it!=s.rend();it++){
    rslt += (long long)(*it-65ll+1)*ind;
    ind*=26ll;
  }
  cout << rslt << endl;
  return 0;
}