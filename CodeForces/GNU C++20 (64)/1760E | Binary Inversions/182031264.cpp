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
 
#define FIn    \
  cin.tie(0);  \
  cout.tie(0); \
  ios_base::sync_with_stdio(false);
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
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> v(n);
    vector<long> zeros(n);
    vector<long> ones(n);
    vector<long> ones_pos;
    long c_0=0,c_1=0;
    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
      if (v[i] == 0){
        c_0 += 1;
 
      }
      else{ 
        c_1 += 1;
        ones_pos.push_back(i);
      }
      zeros[i] = c_0;
      ones[i] = c_1;
    }
    if(c_1==0 || c_0==0) cout << n-1<<endl;
    else{
      long long rslt=0;
      for(auto indx:ones_pos){
          rslt+=(*zeros.rbegin())-zeros[indx];
      }
      long long mx=rslt;
      for(int i=0;i<n; i++){
          long long temp=rslt;
          if(v[i]==0){
            temp =temp+(*zeros.rbegin()-zeros[i])-ones[i];
            mx = max(mx,temp);
          }
          else if(v[i]==1){
            temp =temp+ones[i]-1-(*zeros.rbegin()-zeros[i]);
            mx = max(mx,temp);
          }
      }
 
      cout <<mx <<endl;
    }
  }
  return 0;
}