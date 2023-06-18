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
#define inf unsigned long long32_MAX
#define FIn    \
  cin.tie(0);  \
  cout.tie(0); \
  ios_base::sync_with_stdio(false)
#define endl '\n'
 
int t, n, arr[500005], x, tmp, minm;
 
void solve()
{
  for (int i = minm; i < x; i++)
  {
    arr[i + 1] += arr[i] / (i + 1);
    arr[i]%=(i+1);
    if (!arr[i + 1] || arr[i]!=0)
    {
      cout << "NO\n";
      return;
    } 
  }
  if (arr[x])
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
 
int main()
{
  FIn;
  // file;
  t = 1;
  // cin >> t;
  memset(arr,500005,0);
  while (t--)
  {
    cin >> n >> x;
    minm = INT_MAX;
    for (int i = 0; i < n; i++)
      cin >> tmp, arr[tmp]++, minm = min(minm, tmp);
    solve();
  }
}