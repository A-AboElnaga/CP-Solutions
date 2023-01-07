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

bool arr[(long long)1e6+1]={};
int  SPF[(long long)1e6+1]={0,1,2,3,2};

void Fprimes(){
    arr[0]=1;arr[1]=1;

    for(int i=4;i<(1e6+1);i+=2){
      arr[i]=1;
      SPF[i]=2;
    }
    for(int i=3;i<(1e6+1);i+=2){
      if(arr[i]==0){
        SPF[i]=i;
        for(int j=2*i;j<1e6+1;j+=i){
          arr[j]=1;
          if(SPF[j]==0)SPF[j]=i;
        }
      }
    }
  }
void extend_window(int ai,bool &pairwise,bool window_factors[]){
    while(ai!=1){
      int spf = SPF[ai];
      if(window_factors[spf]==true){
        pairwise =false;
        break;
      } 
      window_factors[spf]=1;
      while(ai%spf==0) ai/=spf;
    }
  }


int main()
{
  FIn;
  Fprimes();
  int n; cin >> n;
  int v[n]={};
  bool window_factors[(long long) 1e6+1]={};
  bool pairwise=1;
  int GCD; cin >> GCD;
  extend_window(GCD,pairwise,window_factors);
  for(int i=1; i<n;i++){
    cin >> v[i];
    if(pairwise)
      extend_window(v[i],pairwise,window_factors);
    GCD = __gcd(GCD,v[i]);
  }
  
  if(pairwise){cout << "pairwise coprime"; return 0;}
  if(GCD==1){cout << "setwise coprime"; return 0;}
  cout << "not coprime";
  return 0;
}
