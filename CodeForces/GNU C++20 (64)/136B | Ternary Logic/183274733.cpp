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
 
auto D2T(int x, vector<int> &v_x)->void{
            while(x!=0){
                v_x.push_back(x%3);
                x/=3;
            }
        }
 
auto T2D(vector<int> &v_x)->int{
    int rslt=0;
    int pow_val =1;
    for(int i =0 ; i < v_x.size();i++){
        rslt+=pow_val*v_x[i];
        pow_val*=3;
    }
    return rslt;
}
 
int main()
{
  FIn;
  int a,c; cin >> a >> c;
  vector<int> v_a; D2T(a,v_a);
  vector<int> v_c; D2T(c,v_c);
  auto it_va = v_a.begin();
  auto it_vc = v_c.begin();
  int sm;  vector<int> v_b;
  while(it_va!=v_a.end() || it_vc!=v_c.end()){
      sm=0;
      if(it_vc!=v_c.end()){sm+=*it_vc; it_vc++;}
      if(it_va!=v_a.end()){sm-=*it_va; it_va++;}
      if(sm<0) sm+=3;
      v_b.push_back(sm);
  }
  sm = T2D(v_b);
  cout << sm  << endl;
 
  return 0;
}
 