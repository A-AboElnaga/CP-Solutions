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
  string s; cin >> s;
  s+="xxxxx";
  long long rslt = 0;
  vector<pair<int/*heavy*/,long long/*metal*/>> h_m_pair;
  long long c_heavy=0,c_metal=0;
 
  for( auto it= s.begin();it!=s.end();it++){
 
    if(*it=='h')//check heavy
    { string x= "heavy";
      bool h_flag=1;
      auto it1=it;
      for(int j=0;j<5;it1++,j++){
        if(*it1!=x[j]){
          h_flag=0;
          break;
        }
      }
      if(h_flag){
        c_heavy+=1;
        h_m_pair.push_back(make_pair(c_heavy,c_metal));
      }
    }
 
 
    if(*it=='m')//check metal
    {
      string x= "metal";
      bool m_flag=1;
      auto it1=it;
      for(int j=0;j<5;it1++,j++){
        if(*it1!=x[j]){
          m_flag=0;
          break;
        }
      }
      if(m_flag)c_metal+=1;
    }
 
 
  }
  if(c_metal>0){
  for(auto pr:h_m_pair){
    rslt+=c_metal-pr.second;
    }
  }
  cout << rslt;
  return 0;
}
 
 
 