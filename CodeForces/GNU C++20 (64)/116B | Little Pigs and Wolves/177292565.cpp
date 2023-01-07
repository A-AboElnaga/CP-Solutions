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
 
 
 
int main()
{
  FIn;
  int p{}, w{};
  int n ,m; cin >> n >> m;
  vector<char> row(m);
  vector<vector<char>> map(n,row);
  for(int i =0 ; i < n ; i ++){
    for(int j = 0; j < m ; j ++ ){
      cin >> row[j];
    }
    map[i]=row;
  }
  int  poss_count2=0; 
  for(int i =0 ; i < n ; i ++){
    for(int j = 0; j < m ; j ++ ){
      if(map[i][j]=='W') 
              {w+=1;
              if( ( i<n-1  &&  map[i+1][j]=='P' ) || ( i>0 &&  map[i-1][j]=='P' ) ||  ( j <m-1  &&  map[i][j+1]=='P' ) || ( j > 0 &&  map[i][j-1] =='P' ) )
              poss_count2 +=1;
              }
    }
  }
  cout << poss_count2;
 
 
  return 0;
}