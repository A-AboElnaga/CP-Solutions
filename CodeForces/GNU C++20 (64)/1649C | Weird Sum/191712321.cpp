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


 rslt;
 sx[100005];
 sy[100005];
 counter1[100005];
 counter2[100005];
vector<pair<pair<int,int>,int>>> matrix;
vector<pair<pair<int,int>,int>> temp;
int main()
{
  FIn;
  //file;
  rslt=0;
  cin >> n >> m;
  for(int i=0;i<100005;i++){
    sx[i]=0;
    sy[i]=0;
    counter1[i]=0;
    counter2[i]=0;
  }
  matrix.clear();
  temp.clear();
  temp.push_back({{0,0},0});
  matrix.push_back(temp);
  for(int i=1;i<=n;i++){
    temp.clear();
    temp.push_back({{0,0},0});
    for(int j=1;j<=m;j++){
      cin >> x;
      sy[x]+=(long long)i;
      counter1[x]+=1;
      rslt += abs((long long)sy[x]-((long long)counter1[x]*(long long)i));
      temp.push_back({{i,j},x});
    }
    matrix.push_back(temp);
  }
  for(int j=1;j<=m;j++){
    for(int i=1;i<=n;i++){
      x = matrix[i][j].second;
      sx[x]+=(long long)j;
      counter2[x]+=1;
      rslt += abs((long long)sx[x]-((long long)counter2[x]*(long long)j));
    }
  }
  cout << rslt << endl;
 
  return 0;
}