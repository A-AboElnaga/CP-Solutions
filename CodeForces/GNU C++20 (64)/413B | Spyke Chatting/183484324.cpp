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
  int n,m,k;cin >> n >> m >>k;
  vector<int> sent(n+1,0);
  map<int/*chat ID*/,int/*total msg sent*/> chats;
  map<int/*emp ID*/,vector<int>/*his chats*/> emp_chats;
  bool x;
  for(int i =1; i<=n;i++){
    for(int j=1;j<=m;j++){
      cin >>x;
      if(x) emp_chats[i].push_back(j);
    }
  }
  while(k--){
    int s,r; cin >> s>>r;
    sent[s]+=1;
    chats[r]+=1;
  }
  for(int i=1; i<=n;i++){ 
    int rslt=0;
    for(auto it=emp_chats[i].begin();it!=emp_chats[i].end();it++){
      rslt+= chats[*it];
    }
    rslt-=sent[i];
    cout << rslt << ' ';
}
  return 0;
}
 
 
 
 
                              