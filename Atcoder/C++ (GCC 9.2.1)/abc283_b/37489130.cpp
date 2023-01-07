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
#include <utility>

#define FIn   cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false);
#define endl '\n'
using namespace std;


int main()
{
  FIn;
  string s; cin >> s;
  char x='1';
  int rslt =0;
  for(char c:s){
    if(c=='0'&& x=='0'){
      x='1'; continue;
    }
    else{
      rslt+=1;
      x=c;
    }
  }
  cout << rslt;

  return 0;
}