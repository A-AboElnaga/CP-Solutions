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
 
 
int main()
{
  FIn;
  char a,b; cin >> a >>b;
  int x1 = a-'a'+1, y1 = b-'0';
  cin >> a >>b;
  int x2 = a-'a'+1, y2 = b-'0';
 
  int rslt = 64-15-1; //all except rock row and column and knight spot
 
  // knight attacks but not rock
  map<pair<int,int>,int> knight;
  knight[make_pair(x2,y2)]=1;
  for(int dx:{-2,2}){
    for(int dy:{-1,1}){
      if(x2+dx!=x1 && y2+dy!=y1 && y2+dy>0 && y2+dy<9 && x2+dx > 0 && x2+dx<9){
        rslt-=1;
        knight[make_pair(x2+dx,y2+dy)]=1;
      }
    }
  }
  for(int dy:{-2,2}){
    for(int dx:{-1,1}){
      if(x2+dx!=x1 && y2+dy!=y1 && y2+dy>0 && y2+dy<9 && x2+dx > 0 && x2+dx<9){
        rslt-=1;
        knight[make_pair(x2+dx,y2+dy)]=1;     
      }
    }
  }
 
  //second horse attack on rock but not on horse 1
  for(int dx:{-2,2}){
    for(int dy:{-1,1}){
      if(knight[make_pair(x1+dx,y1+dy)]!=1 && y1+dy>0 && y1+dy<9 && x1+dx > 0 && x1+dx<9){
        rslt-=1;
        knight[make_pair(x1+dx,y1+dy)]=1;  
      }
    }
  }
  for(int dy:{-2,2}){
    for(int dx:{-1,1}){
      if(knight[make_pair(x1+dx,y1+dy)]!=1 && y1+dy>0 && y1+dy<9 && x1+dx > 0 && x1+dx<9){
        rslt-=1;
        knight[make_pair(x1+dx,y1+dy)]=1;  
      }
    }
  }
 
 
  cout << rslt;
  return 0;
}
 