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
 
int t,n,m,x1,y11,x2,y2;
int x,y;
string d;
int dx,dy,dxi,dyi;
int rslt;
bool found;
int counter;
bool start;
 
bool Origin(){
 if(x==x1 && y==y11){
  counter+=1;
 }
 return(counter<5);
}
 
void step(){
  x=x1;
  y=y11;
  bool mirx=0,miry=0;
  while((x!=x2 || y!=y2) && Origin()){
    if(x+dx==n||x+dx==-1){
      dx*=-1;
      mirx=1;
    }
    if(y+dy==m || y+dy==-1){
      dy*=-1;
      miry=1;
    }
    if(mirx || miry){
      rslt+=1;
      mirx=0;
      miry=0;
    }
    x+=dx;
    y+=dy;
 
  }
  if(x==x2 && y==y2){
    found=1;
  }
 
};
 
 
void solve(){
 
    rslt=0;
    found=0;
 
    if(d[0]=='D'){dx=1;}
    else dx=-1;
    if(d[1]=='R'){dy=1;}
    else dy=-1;
    dxi=dx;dyi=dy;
    counter=0;
    step();
 
    if(found){
    cout << rslt << endl;
    }
    else{
      cout << -1 << endl;
    }
}
 
 
int main()
{
  FIn;
  // file;
  // t=1;
  cin >> t;
  while(t--){
    cin >> n >> m >> x1 >> y11 >> x2 >> y2 >> d;
    x1-=1;y11-=1; x2-=1;y2-=1;
    solve();
  }
}