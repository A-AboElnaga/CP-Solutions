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


/*
int main()
{
  FIn;
  int t; cin >>t;
  while(t--){
      int w0,h0;//overflow?
      cin >> w0 >> h0;
      int x1,y1,x2,y2; cin >> x1>>y1>>x2>>y2;
      int w,h; cin >> w >>h;
      if((x2-x1+w>w0 && y2-y1+h>h0) ||w> w0 || h >h0 )
        cout << -1 <<endl;
      else{
        int xn,yn;
        if(x1>=w-x2) xn=0; else xn=x2;
        if(y1>=h-y2) yn=0; else yn=y2;
        long long r1,r2,r3,rx,ry;
        double long rslt{1e17};
        if(xn>=x2 || yn >=y2 || xn+w<=x1 || yn+h<=y2)
           cout << 0 <<endl;
           continue;
        //UR corner

        else if(xn<x2 && yn < y2 && xn>x1 && yn>y1){
            rx = min(x2-xn+w,x1); 
            r1 = 
            r2 =
            r3 = 
            rslt = sqrt(min{r1,r2,r3});
        }
        //UL corner
        else if(xn+w<x2 && yn < y2 && xn+w>x1 && yn>y1){
            r1 = 
            r2 =
            r3 = 
            rslt = sqrt(min{r1,r2,r3});
        }
        //BR corner
        else if(xn<x2 && yn+h < y2 && xn>x1 && yn+h>y1){
            r1 = 
            r2 =
            r3 = 
            rslt = sqrt(min{r1,r2,r3});          
        }
        //BL corner
        else if(xn+w<x2 && yn+h < y2 && xn+w>x1 && yn+h>y1){
            r1 = 
            r2 =
            r3 = 
            rslt = sqrt(min{r1,r2,r3});          
        }
      }    
  }
  return 0;
}
*/

int main()
{
  FIn;
  int t; cin >> t;
  while(t--){
    int n; cin >> n; 
    //  1 2 2 2 2 2 3 4 5
    map <int,int> m;
    set<int> s;
    for(int i =0; i < 2*n; i ++){
      int x; cin >> x;
      m[x]+=1;
      s.insert(x);
    }
    if (s.size()==1){
      if(n==1) cout << "YES" << endl;
      else cout << "NO" << endl;
      continue;
    }
    auto itL=s.begin(); auto itR=s.rbegin();
    int dec=0,pairs{};
    while(*itL!=*itR && itL!=s.end() && itR!=s.rend()){
      dec = min(m[*itL],m[*itR]);
      pairs+=dec;
      m[*itL]-=dec; m[*itR]-=dec; 
      if(m[*itL]==0) itL++;
      if(m[*itR]==0) itR++;
    } 
    if(itL!=s.end() && itR!=s.rend()&& *itL==*itR && pairs+1 < m[*itL]/2){
      cout << "NO" <<endl;
    }
    else{cout << "YES" <<endl;}
  }
  return 0;
}