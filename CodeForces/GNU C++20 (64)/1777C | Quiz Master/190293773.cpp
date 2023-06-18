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

x;
 topic_wise_prof[100005];
int,int>> students;
 stud_2_topic(int intell){
long i=1;i*i<=intell;i++){
intell%i==0){
        topic_wise_prof[i].insert(intell);
        topic_wise_prof[intell/i].insert(intell);
      }
    }
}
 
int main()
{
  FIn;
  // file;
  cin >> t;
  while(t--){
students.clear();
    cin >> n >> m;
    for(int i=0;i<=m;i++){
      topic_wise_prof[i].clear();
    }
    for(int i=0;i<n;i++){
      cin >> x;
      stud_2_topic(x);
    }
    
    bool poss=true;
    for(int i=1;i<=m;i++){
      if(topic_wise_prof[i].size()==0){
        poss=false;
        break;
      }
    }
    int rslt;
    if(poss){
      for(int i=1;i<=m;i++){
          students.insert({*(topic_wise_prof[i].begin()),i});
          topic_wise_prof[i].erase(topic_wise_prof[i].begin());
      }
      rslt = students.rbegin()->first - students.begin()->first;
      while(true){
        int to_inc = students.begin()->second;
        students.erase(students.begin()); 
        if(topic_wise_prof[to_inc].size()>0){
            students.insert({*(topic_wise_prof[to_inc].begin()),to_inc});
            rslt = min(rslt,students.rbegin()->first - students.begin()->first);
            topic_wise_prof[to_inc].erase(topic_wise_prof[to_inc].begin());
        }
        else{
          break;
        }
      }
    }
    if(poss) cout << rslt << endl;
    else cout << -1 << endl;
 
  }
  return 0;
}