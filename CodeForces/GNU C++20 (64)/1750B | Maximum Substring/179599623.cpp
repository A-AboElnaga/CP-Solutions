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
 
 
 
int main()
{
  FIn;
  int t; cin >>t;
  while(t--){
    int n; cin >>n;
    long long c_0{},c_1{},c_0A{},c_1A{},c_1t{},c_0t{};
    char x;
    bool flag0=true,flag1=true;
    for(int i =0; i < n; i++){
      cin >> x;
      if(x=='0'){
        c_1 = max(c_1,c_1t);
        c_1t=0;
        c_0A+=1;
        c_0t+=1;
      }
      else{
        c_0 = max(c_0,c_0t);
        c_0t=0;
        c_1A+=1;
        c_1t+=1;
      }
    }
    c_0 =  max(c_0,c_0t);
    c_1 = max(c_1,c_1t);
    long long rslt = max({c_1A*c_0A, c_1*c_1,c_0*c_0}) ;
    cout << rslt <<endl;
 
  }
  return 0;
}