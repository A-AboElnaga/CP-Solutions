#include <iostream>
#include <string>
#include <stdio.h>
#define FIn  cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(false);
#define endl '\n'
 
using namespace std;
 
 
 
bool checker(string s1,int k){
    int arry[10]={},rslt{};
    for (auto ch:s1){
      int x= ch-'0';
      if (x <=k && (arry[x]==0)){
         arry[x]=1;
         rslt+=1;
      }
    }
    return (rslt==k+1);
}
int main()
{  
  FIn;
  int n,k,rslt{};
  string s1;
  cin >> n >>k;
  while(n--){
    cin >> s1;
    if (checker(s1,k)) rslt+=1;
  }
  cout << rslt;
  return 0;
}