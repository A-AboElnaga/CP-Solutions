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
  while (t--){
      int n,q; cin  >>n >> q;
      map<long long, vector<long long> > m;
      vector<long long> arr(60,0);
      m[0]=arr;
      for(int i=1; i <= n; i ++){
          unsigned long long x; cin >> x;
          unsigned long long z =1;
          if(z&x) arr[0]+=1;
          for(int j =1; j <60; j++){
            z*=2;
            if(z&x){
              arr[j]+=1;
            }
          }
          m[i]=arr;
      }
      while(q--){
        long long k,l1,r1,l2,r2; cin >>  k >> l1 >> r1 >> l2 >> r2;
        long long rslt = (m[r2][k]-m[l2-1][k])*(r1-l1+1 -(m[r1][k]-m[l1-1][k]));
        rslt += (m[r1][k]-m[l1-1][k])*(r2-l2+1 -(m[r2][k]-m[l2-1][k]));
        cout <<rslt <<endl;
      }
  }

  return 0;
}