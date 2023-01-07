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
 
 
auto divisors(long x,set<long> &s)->void{
  for(long i=1; i*i<=x;i++){
    if(x%i==0){
      s.insert(i);
      s.insert(x/i);
    }
  }
}
 
auto solve(string &small, string &big) -> int
  {
      int rslt = 0;
 
 
      //Freq map for chars in smaller string
      map<char,long> s_freq;
 
      //Find min occ of a char in the string  
      long mns1=small.size(), mxs1=0;
      for(char x:small){s_freq[x]+=1;}
      for(auto el:s_freq){mns1= min(mns1,el.second);}
 
      //Find length of possibe divisors
      set<long> possible_divs;
      divisors(mns1,possible_divs);
 
      //Find possible divisors (divisors of the smaller)
      //and check against larger
      for(int div:possible_divs){
        if(small.size()%div==0){
          string pos=small.substr(0,small.size()/div);
          int sz=small.size();
          int bz= big.size();
          int pz= pos.size();
          bool flag=1;
          for(int i=0; i<max(pz,sz);i++){
              if(pos[i%pz]!=small[i%sz]){
                flag=0;
                break;
              }
            }
          if(flag){
            //Check if the divisors of the shorter string are also divisors of the longer;
              if(bz%pz==0){
                  bool flag2=1;
                  for(int j=0; j<max(pz,bz);j++){
                      if(pos[j%pz]!=big[j%bz]){
                        flag2=0;
                        break;
                      }
                  }
                  if(flag2)rslt+=1;
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
 