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
  #include <sstream>
 
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
 
 
  int main()
  { 
    FIn; 
    // file;
    int t; cin >> t;
    while(t--){
      int n; cin >> n;
      int grid[2][n]={{0}};
      int count_b=0;
      for(int i=0;i<2;i++){
        for(int j=0;j<n;j++){
          char c; cin >> c;
          if(c-'B'==0) {grid[i][j]=1;count_b+=1;}
          else grid[i][j]=0;
        }
      }
      bool flag=0;
      //top bottom
      if(grid[0][0]==1){
        int tb_black=1;
        int direc=1;
        int i=0,j=0;
        while(true){
          if(i+direc<2 && grid[i+direc][j]==1){
            i+=direc; direc*=-1;
            tb_black+=1;
          }
          if(j+1<n && grid[i][j+1]==1){
            j+=1;
            tb_black+=1;
          }
          else break;
        }
        if(tb_black==count_b) {flag= 1;goto Here;}
      }
      //bottom top
      if(grid[1][0]==1){
        int tb_black=1;
        int direc=-1;
        int i=1,j=0;
        while(true){
          if(i+direc<2 && grid[i+direc][j]==1){
            i+=direc; direc*=-1;
            tb_black+=1;
          }
          if(j+1<n && grid[i][j+1]==1){
            j+=1;
            tb_black+=1;
          }
          else break;
        }
        if(tb_black==count_b) {flag= 1;goto Here;}
      }
      
      Here:
         if(flag) cout << "YES" << endl;
         else cout << "NO" << endl;
      
    }
  return 0;
  }