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
 
 
 
auto solve(string &small, string &big) -> int
  {
      int rslt = 0;
      for(int i=1;i<=small.size();i++){
        if(small.size()%i==0 && big.size()%i==0){
        string x1 = small.substr(0,i);
        string x2 = big.substr(0,i);
        if(x1==x2){
            string s1,s2;
            while(s1.size()<small.size())s1+=x1;
            while(s2.size()<big.size())s2+=x1;
            if(s2==big && s1==small){
              rslt+=1;
            }
          }
        }
      }
      return rslt;
  }
 
int main()
{
  FIn;
  string s1; cin >> s1;
  string s2; cin >> s2;
 
  int rslt=0;
  if(s1.size()<s2.size()){
    rslt = solve(s1,s2);
  }
  else{ rslt = solve(s2,s1);}
 
  cout << rslt;
  return 0;
}
 