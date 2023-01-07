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
 
 
 
int main()
{
  FIn;
  int n; cin >> n;
  int mx=0;
  map<int, int> m;
  set<int> s;
  for(int i = 0; i < n ; i++){
    int x; cin >> x;
    s.insert(x);
    m[x]+=1;
    mx= max(mx,m[x]);
  }
  if(mx>n/3 || m[5] || m[7]) { cout << -1 ; return 0;} 
  else {  
    if(m[1]==m[6]+m[4] && m[6] <= m[2]+m[3] && m[2]== m[4]+max(0,(m[6]-m[3])) && m[1]==m[2]+m[3] ){
        while(m[6]>0 && m[3]>0) {cout << "1 3 6" <<endl; m[6]--; m[3]--;}
        while(m[6]>0 && m[2]>0) {cout << "1 2 6" <<endl; m[6]--; m[2]--;}
        while(m[4]>0 && m[2]>0) {cout << "1 2 4" <<endl; m[4]--; m[2]--;}
    }  
    else {cout << -1; return 0;}
  }
 
  return 0;
}