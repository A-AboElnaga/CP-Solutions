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
  string n;
  cin >> n;
 
  if(n.size()%2==1){
    int sz= n.size()+1;
    for(int i=0;i<sz/2;i++) cout << 4;
    for(int i=0;i<sz/2;i++) cout << 7;
    return 0;
  }
  int sz = (n.size()+1) / 2; // change odd
  string rslt ="";
  for(int i=0;i<sz;i++) rslt+="4";
  for(int i=0;i<sz;i++) rslt+="7";
  string init ="4";
  init +=rslt+"7";
  long long mn = stoll(init);
  init = rslt;
  long long int_n= stoll(n);
do
{
  if(stoll(rslt)>=int_n){
    mn = min(mn,stoll(rslt));
  }
  next_permutation(rslt.begin(),rslt.end());
} while (rslt!=init);
  cout << mn << endl;
  return 0;
}
 
                             