#include <bits/stdc++.h>
 
#define FIn    \
  cin.tie(0);  \
  cout.tie(0); \
  ios_base::sync_with_stdio(false);
#define endl '\n'
using namespace std;
 
int main()
{
  FIn;
  int n; cin >> n;
  long long add=0;
  long long prev=0;
  for(int i=0; i < n; i++){
    long long x; cin >> x;
    x+=add;
    if(x>=prev) ;//do nothing
    else{
      add+=(prev-x);
    }
    prev=max(x,prev);
  }
  cout << add;
 
  return 0;
}
 