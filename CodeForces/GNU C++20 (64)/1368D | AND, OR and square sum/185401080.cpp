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
  int n; cin >> n;
  int x;
  int Binary[20]={};
  for(int i=0;i<n;i++){
    cin>>x;
    int ii =1;
    if(ii&x)Binary[0]+=1;
    for(int j=1;j<20 && ii<=x;j++){
      ii=ii<<1;
      if(ii&x)Binary[j]+=1;
    }
  }
  long long rslt = 0 ; 
  long long del_min=0;
  for(int i=0;i<20;i++){
    long long mn=1000000;
    long long num=0;
    for(int j=0;j<20;j++){
      if(Binary[j]-del_min>0){
        mn=min((long long)Binary[j]-del_min,mn);
        num+= 1<<j;
      }
    }
    rslt += mn*(num*num);
    del_min+=mn;
    if(num==0) break;
  }
  cout << rslt << endl;
  return 0;
}