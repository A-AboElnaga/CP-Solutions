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
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    map<int,int> mp; int x;
    int arr[n]={};
    for(int i=0;i<n;i++){
      cin >> x;
      arr[i]=x;
      mp[x]+=1;
    }
    int sm=0;
    int num=0;
    bool flag=1;
    for(auto pr:mp){
      if(pr.second%pr.first!=0){flag=0; break;}
      sm+=pr.second;
    }
    if(sm!=n || !flag) cout << "-1" << endl;
    else{
      map<int,int> val;
      for(int i=0;i<n;i++){
        if (mp[arr[i]]%arr[i]==0){num+=1;  val[arr[i]]=num;}
        mp[arr[i]]-=1;
        cout << val[arr[i]] << ' ';
      }
      cout << endl;
    }

  }
  return 0;
}