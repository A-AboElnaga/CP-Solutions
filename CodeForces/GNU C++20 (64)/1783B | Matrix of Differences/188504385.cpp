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






 cin >> t;
--){
 cin >> n;
 matrix[n][n]={{0}};
    matrix[0][0]=n*n;
    int num =n*n -1;
    for(int i=0;i<n;i++){
      
      //left to right fill;
      for(int j=1;j<n;j++){
        matrix[i][j]=matrix[i][j-1]+(pow(-1,(i+j)%2))*num;
        num-=1;
      }
    if(i+1<n){
      matrix[i+1][n-1]=matrix[i][n-1]+(pow(-1,(i+n)%2))*num;
      num-=1;
      i++;
      //right to left fill;
      for(int j=n-2;j>=0;j--){
        matrix[i][j]=matrix[i][j+1]+(pow(-1,(i+j)%2))*num;
        num-=1;
      }
      if(i+1<n){
          matrix[i+1][0]=matrix[i][0]+(pow(-1,(i+1)%2))*num;
          num-=1;
      }
    }
 
 
    }
    // vector<int> v;
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        // v.push_back(matrix[i][j]);
        cout << matrix[i][j] << ' ';
      } cout << endl;
    }
    // sort(v.begin(),v.end());
    // for(auto el:v){
    //   cout << el << ' ';
    // } cout << endl;
  }
 
return 0;
}