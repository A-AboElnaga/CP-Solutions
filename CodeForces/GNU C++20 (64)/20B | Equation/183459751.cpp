#include <bits/stdc++.h>
 
#define FIn    \
  cin.tie(0);  \
  cout.tie(0); \
  ios_base::sync_with_stdio(false);
#define endl '\n'
using namespace std;
 
auto sqRoot(long double &a, long double &b, long double &c,vector<long double> &sol, bool &flag)-> void {
  long double x = (b*b - 4*a*c);
  if(x<0) {sol.push_back(0); flag=0; return;}
  if(x==0){long double rt = (-b)/(2*a); sol.push_back(rt); return;}
  long double rt = (-b-sqrt(x))/(2*a);
  sol.push_back(rt);
  rt = (-b +sqrt(x))/(2*a);
  sol.push_back(rt);
  return;
}
 
auto sqRoot(long double &b, long double &c,vector<long double> &sol, bool &flag)-> void {
  sol.push_back(-c/b);
  return;
}
auto sqRoot(long double &c,vector<long double> &sol, bool &flag)-> void {
  flag=0;
  return;
}
 
 
int main()
{
  FIn;
  vector<long double> sol;
  long double a,b,c; cin >> a >> b >> c;
  if(a==0 && b==0 && c==0){cout << -1; return 0;}
  bool flag =1;
  if(a==0 && b==0){sqRoot(c,sol,flag);}
  else if(a==0){sqRoot(b,c,sol,flag);}
  else{sqRoot(a,b,c,sol,flag);}
  if(flag){
  cout << sol.size() <<endl;
  cout << setprecision(12) << fixed;
  sort(sol.begin(),sol.end());
  for(auto val:sol) cout << val << endl;
  }
  else{cout << 0 <<endl;}
  return 0;
}