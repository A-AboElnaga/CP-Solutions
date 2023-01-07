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
  long long n; cin >> n;
  map<long long ,long long> m;
  for(int i=0; i <n; i++)
    {int x; cin >> x; m[x]+=1;}
  cout << prev(m.end(),1)->first - m.begin()->first << ' ';
  if(prev(m.end(),1)->first - m.begin()->first ==0){ cout << (n*(n-1))/2 ; return 0;}
   cout <<  prev(m.end(),1)->second * m.begin()->second;
  return 0;
}