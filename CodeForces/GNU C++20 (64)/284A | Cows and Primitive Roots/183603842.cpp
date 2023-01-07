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
  int p; cin >> p;
  int count=0;
 
  for(int i=1;i<p;i++){
    int before_1 = 1;
    bool flag=1;
    for(int j=1;j<p-1;j++){
      before_1=(before_1*i)%p;
      if((before_1-1)%p==0){
        flag=0;
        break;
      }
    }
    if(flag){
        before_1=(before_1*i)%p;
            if((before_1-1)%p==0){
              count+=1;
            }
    }
  }
  cout << count;
  return 0;
}
 
 
 