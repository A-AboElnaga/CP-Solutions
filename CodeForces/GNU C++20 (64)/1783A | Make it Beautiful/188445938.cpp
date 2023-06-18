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






 cin >>t;
--){
 cin >> n;
 arr[n];
    for(int i=0;i<n;i++){
      cin >> arr[i];
    }
    sort(arr,arr+n);
    reverse(arr,arr+n);
    deque<int> deq;
    if(arr[0]==arr[n-1])cout << "NO" << endl;
    else{
      cout << "YES" << endl;
      for(int i=0;i<n;i++){
        deq.push_back(arr[i]);
      }
      while(!deq.empty()){
          cout << deq.front()<< ' ';
          deq.pop_front();
          if(!deq.empty()){
            cout << deq.back() <<' ';
            deq.pop_back();
          }
      }
      cout << endl;
    }
  }
return 0;
}