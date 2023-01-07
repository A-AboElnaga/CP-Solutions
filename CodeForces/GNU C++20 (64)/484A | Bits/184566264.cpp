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
  int n;cin >>n;
  while(n--){
    long long l,r; cin >> l >>r;
    long long add =1;
    long long rslt=l;
    int l_popc=__popcount(l);
    int popc=l_popc;
    while(l+add<=r){
      if(!(l&add)){
        l+=add; l_popc+=1;
        if(l_popc>popc){
          rslt = l;
          popc=l_popc;
        }
        else if(l_popc==popc && l<rslt){
          rslt = l;
        }
      }
      add*=2;
    }
    cout << rslt <<endl;
  }
  return 0;
}
 
                               