<algorithm>
<cmath>
<deque>
<functional>
<iomanip>
<iostream>
<map>
<numeric>
<queue>
<set>
<stack>
<string>
<unordered_set>
<utility>
<valarray>
<vector>
<sstream>
<bitset>
bits/stdc++.h>
namespace std;

 file                       \
"out.txt", "w", stdout); \
"in.txt", "r", stdin)
 inf unsigned long long32_MAX
FIn    \
0);  \
(0); \
::sync_with_stdio(false)
 endl '\n'
 p   1000000007


m;

 matrix[501][501];
501][501];
 rslt;
 counter;
int main()
{
  FIn;
  // file;
  cin >> t;
  while(t--){
    rslt =0;
    cin >> n >> m;
    for(short i=0;i<n;i++){
      for(short j=0;j<m;j++){
        cin >> x;
        if(x=='*') matrix[i][j]=1;
        else      matrix[i][j]=0;
        width[i][j]=1000000010;
      }
    }
    for(short i=0;i<n;i++){
        counter=0;
        for(int c=0;c<m;c++){
          if(matrix[i][c])
            counter+=matrix[i][c]; 
          else counter=0;
 
          width[i][c]=min(width[i][c],counter);
        }
        counter =0;
        for(int c=m-1;c>=0;c--){
          if(matrix[i][c])
            counter+=matrix[i][c]; 
          else counter=0;
 
          width[i][c]=min(width[i][c],counter);
        }  
    }
    for (int r = 0; r < n; r++)
        for (int c = 0; c < m; c++)
            for (int rr = r; rr < n; rr++) {
                if (width[rr][c] <= rr - r)
                    break;
 
                rslt++;
            }
 
    cout << rslt << endl;
 
  }
 
 
  return 0;
}