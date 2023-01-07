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
  long long rslt =1;
  string s; cin >> s;
  auto it= s.begin();
  long long letters=10;
  map<char,int> m;
  string tens="";
  if(*it=='?'){rslt=9;it++;}
 
  else if(*it-'0'>9){rslt=9;m[*it]+=1;letters=9;it++;}
 
  for(;it!=s.end();it++){
    if(*it=='?') tens+='0';
    else if(*it-'0'<=9) ; //do nothing;
    else{
      if(m[*it]==0){
        m[*it]+=1;
        rslt*=letters;
        letters-=1;
      }
 
    }
  }
  cout << rslt << tens;
 
  return 0;
}