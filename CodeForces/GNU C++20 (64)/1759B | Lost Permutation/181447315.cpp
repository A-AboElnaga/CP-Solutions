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
long solve(long long s){
    return (floor(1/2+sqrt(1+2*4*s)/2));
}
 
int main()
{
  FIn;
  int t; cin >> t;
  while(t--){
    long long m ,s; cin >> m >>s;
    int mx= 0;
    for(int i=0; i < m; i ++){
      int x; cin >>x;
      mx=  max(x,mx);
      s+=x;
    }
    long long rslt = solve(s);
    if(rslt*(rslt+1)==2*s) rslt =rslt;
    else if(rslt*(rslt-1)==2*s) rslt -=1;
    else if ((rslt+1)*(rslt+2)==2*s) rslt+=1;
    else {cout << "No" << endl; continue;}
    if(rslt>= mx) cout << "Yes" << endl;
    else cout << "No" << endl; 
  }  
 
 
 
  return 0;
}