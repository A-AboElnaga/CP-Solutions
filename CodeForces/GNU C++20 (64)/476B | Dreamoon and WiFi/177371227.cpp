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
 
#define FIn    cin.tie(0);  cout.tie(0); ios_base::sync_with_stdio(false);
#define endl '\n'
using namespace std;
 
long fac(int x){
  long rslt = 1;
  for(int i=1; i <= x; i++){
    rslt*=i;
  }
  return rslt;
}
 
int main()
{
  FIn;
  string s; cin >> s;
  string s1; cin >> s1;
  int s_p{},s_n{},s1_p{},s1_n{};
  for(int i =0; i < s.size(); i++){
    if(s[i]=='+')s_p+=1;
    else s_n+=1;
    if(s1[i]=='+')s1_p+=1;
    else if(s1[i]=='-') s1_n+=1;
  }
  if(s1_n> s_n || s1_p > s_p) cout << 0;
  else{
    int q = (int) s.size()-s1_p - s1_n;
    cout << setprecision(10) << fixed;
    cout <<  (fac(q)/ (double) (fac(s_n-s1_n)*fac(s_p-s1_p)))/(double)pow(2,q);
  }
  return 0;
}