#include <algorithm>
#include <cmath>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_set>
#include <utility>
#include <valarray>
#include <vector>
#include <bitset>
#include <bits/stdc++.h>
using namespace std;
 
#define file                       \
  freopen("out.txt", "w", stdout); \
  freopen("in.txt", "r", stdin)
 
#define FIn    \
  cin.tie(0);  \
  cout.tie(0); \
  ios_base::sync_with_stdio(false)
#define endl '\n'
 
int t;
int n;
int a,b;
vector<int> rslt;
void solve()
{  
 cin >> n;
 rslt.clear();
 if(n%2==0){
  cout <<-1 <<endl;
  return;
 }
 while(n>1){
  a=n/2;b=n-a;
  if(a%2==0){
    swap(a,b);
  }
  n=a;
  if(a>b){
    rslt.push_back(1);
  }
  else{
    rslt.push_back(2);
  }
  if(rslt.size()>40){
    cout << -1 << endl;
    return;
  }
 }
 cout << rslt.size() << endl;
 for(auto i=rslt.rbegin();i!=rslt.rend();i++){
  cout << *i << ' ';
 }
 cout << endl;
}
 
int main()
{
  FIn;
  // file;
  // t = 1;
  cin >> t;
  while (t--)
  { 
    solve();
  }
}