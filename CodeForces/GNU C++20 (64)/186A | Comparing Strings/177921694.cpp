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
 
long fac(int x){
  long rslt = 1;
  for(int i=1; i <= x; i++){
    rslt*=i;
  }
  return rslt;
}
 
int main()
{
  FIn;
  string s1,s2; cin >> s1 >> s2;
  if (s1.size()!= s2.size()) cout << "NO";
  else{
    vector<int> diffs;
    for(int i =0; i < s1.size(); i++){
      if(s1[i]!=s2[i]){diffs.push_back(i);}
      if(diffs.size()>2){cout << "NO"; return 0;}
    }
    if(diffs.size()==2 && s1[diffs[0]]==s2[diffs[1]] && s1[diffs[1]]==s2[diffs[0]]) cout << "YES";
    else cout << "NO";
  }
  return 0;
}