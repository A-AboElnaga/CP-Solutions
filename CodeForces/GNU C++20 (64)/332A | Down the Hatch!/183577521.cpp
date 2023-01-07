#include <iostream>
#include <string>
#include <iomanip>
#include <numeric>
#include <cmath>
#include <vector>
#include <algorithm>
#include <set>
#include <valarray>
#include <queue>
#include <unordered_set>
#include <map>
#include <stack>
#include <deque>
 
#define FIn    \
  cin.tie(0);  \
  cout.tie(0); \
  ios_base::sync_with_stdio(false);
#define endl '\n'
using namespace std;
 
int main()
{
  FIn;
  int n; cin >>n;
  string s; cin >> s;
 
  int rslt = 0;
  int same = 0;
  char prev='c';
  auto it =s.begin();
  for(int i=0; it!=s.end() ; i++,it++){
    if(same>=3 && i%n==0){
        rslt+=1;
    }
    if(*it==prev){
      same+=1;
    }
    else{same=1;}
    prev=*it;
   }
  cout << rslt;
  return 0;
}
 
 
 