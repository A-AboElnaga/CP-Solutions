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
  while(t--){
    int n; cin >>n;
    map<int,int/*freq*/> m;
    map<int,pair<int/*indx*/,int>> ind;
    int mx=0;
    vector<int> a(n);
    for(int i =0; i < n; i++){
      cin>> a[i];
      int x = a[i];
      m[x]+=1;
      if(m[x]==1){
        ind[x]=make_pair(i,i);
      }
      ind[x]=make_pair(ind[x].first,i);
    }
    /*
    if(mx==1){
      cout << "1 1" <<endl;
    }
    else if(mx==n){
      cout << "1 " << n <<endl;
    }
    else{
        int rslt =-1;
        for(int win_size=1; win_size <=n; win_size++){
            int loc_rslt=-1;
            pair <int,int> rslt_pair;
            rslt_pair=make_pair(1,1)
            set<int> s;
            int c =0;
            for(int ind=0;c<=j,ind+c<n;c++){
              s.inert(a[ind+c]);
              if(c==j ||ind+c==n-1){
                ind++; c=0;
                loc_rslt= win_size-ind-1+s.size();
                if(loc_rslt > rslt){
                  rslt = 
                }
                if(ind+c==n-1){
                  break;
                }
              }
            }
        }
    }
  */
  cout << "1 " <<n<<endl;
  }
  return 0;
}