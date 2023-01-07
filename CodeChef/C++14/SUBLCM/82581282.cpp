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
// int  primes[100000]={2};
int  SPF[(long long)1e6+1]={0,1,2,3,2};
int c_primes=1;

void Fprimes(){
    arr[0]=1;arr[1]=1;

    for(int i=4;i<(1e6+1);i+=2){
      arr[i]=1;
      SPF[i]=2;
    }
    for(int i=3;i<(1e6+1);i+=2){
      if(arr[i]==0){
        // primes[c_primes]=i;
        c_primes+=1;
        SPF[i]=i;
        for(int j=2*i;j<1e6+1;j+=i){
          arr[j]=1;
          if(SPF[j]==0)SPF[j]=i;
        }
      }
    }
  }
void shrink_window(int &w_s,bool window_factors[],int v[]);

void extend_window(int ai,int &w_s,int v[],bool window_factors[]){
    while(ai!=1){
      int spf = SPF[ai];
      while(window_factors[spf]==true){
        shrink_window(w_s,window_factors,v);
      } 
      window_factors[spf]=1;
      while(ai%spf==0) ai/=spf;
    }
  }
void shrink_window(int &w_s,bool window_factors[],int v[]){
    int ai = v[w_s];
    while(ai!=1)
    {
      int spf = SPF[ai];
      window_factors[spf]=false;
      while(ai%spf==0) ai/=spf;
    }
    w_s+=1;
}
int main()
{
  FIn;
  Fprimes();
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    int v[n]={};
    bool window_factors[(long long)1e6+1]={};
    for(int i=0; i<n;i++) cin >> v[i];
    int w_s=0,rslt=1;
    for(int w_e=0; w_e<n;w_e++){
      int ai= v[w_e];
      extend_window(ai,w_s,v,window_factors);
      rslt =max(rslt,w_e-w_s+1);
    }
    if(rslt==1)rslt=-1;
    cout << rslt << endl;
  }
  return 0;
}
