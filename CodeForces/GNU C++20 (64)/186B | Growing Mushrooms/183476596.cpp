#include <bits/stdc++.h>
 
#define FIn    \
  cin.tie(0);  \
  cout.tie(0); \
  ios_base::sync_with_stdio(false);
#define endl '\n'
using namespace std;
 
bool comp(pair<double long/*height*/,int/*id*/> &p1,pair<double long/*height*/,int/*id*/> &p2){
    if(p1.first==p2.first){
      return p1.second<p2.second;
    }
    return p1.first>p2.first;
 
}
 
int main()
{
  FIn;
  long double n,t1,t2,k; cin >> n >> t1 >> t2 >> k; k=1-(k/100.00);
  vector<pair<double long/*height*/,int/*id*/>> rslts;
  for(int i=0; i<n;i++){
    long double v1,v2; cin >> v1 >>v2;
    long double h = max((v1*t1*k) + (v2*t2), (v2*t1*k) + (v1*t2));
    rslts.push_back(make_pair(h,i+1));
  }
  sort(rslts.begin(),rslts.end(),comp);
  for(auto it=rslts.begin(); it!=rslts.end();it++){
    cout << it->second << ' ';
    cout << setprecision(2) <<fixed << it->first <<endl;
  }
  return 0;
}
 