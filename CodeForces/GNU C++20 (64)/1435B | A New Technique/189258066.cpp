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


500][500];
500][500];
500][500];



{
  FIn;
  // file;
  cin >> t;
  while(t--){
    cin >> n >> m;
    int f_col=0;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        cin>>n_arr[i][j];
      }
    }
    for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
        cin >> m_arr[i][j];
        if(m_arr[i][j]==n_arr[0][0]){
          f_col =i;
        }
      }
    }
    int row_order[n*m];
    for(int j=0;j<n;j++){
      grid[j][0]=m_arr[f_col][j];
      row_order[m_arr[f_col][j]]=j;
    }
    for(int i=0;i<n;i++){
      int indx_row = row_order[n_arr[i][0]];
      for(int j=1;j<m;j++){
          grid[indx_row][j]=n_arr[i][j];
      }
    }
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        cout << grid[i][j] << ' ';
      }
      cout << endl;
    }
  }
  return 0;
}