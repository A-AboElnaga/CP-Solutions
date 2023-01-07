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

long long calc(string s){
    if(s.size()==0) return 0;
    if(s.size()==1) return (s[0]-'0');
    long long rslt =stoll(s);
    for(int i=1;i<s.size();i++){
      rslt += stoll(s.substr(0,i))*pow(2,s.size()-i-1) +calc(s.substr(i));
    }
    return rslt;

}

int main()
{
  FIn; 
    string s; cin >>s;
    long long rslt = calc(s);
    cout << rslt << endl;
  return 0;
}