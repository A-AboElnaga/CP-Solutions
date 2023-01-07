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
  long double n,t1,t2,k; cin >> n >> t1 >> t2 >> k; k=1-(k/100.0);
  map<double long/*height*/,set<int/*id*/>> rslts;
  for(int i=0; i<n;i++){
    long double v1,v2; cin >> v1 >>v2;
    long double h = max(v1*t1*k + v2*t2, v2*t1*k + v1*t2);
    rslts[h].insert(i+1);
  }
  for(auto it=rslts.rbegin(); it!=rslts.rend();it++){
    for(auto it2=it->second.begin();it2!=it->second.end(); it2++){
        cout << *it2 << ' ';
        cout << setprecision(2) << fixed << it->first <<endl;
    }
  }
  return 0;
}
 
 
 