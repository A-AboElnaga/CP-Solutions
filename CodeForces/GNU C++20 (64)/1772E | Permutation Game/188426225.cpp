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
(int a, int b, int c, int d){
&& a < c && d >b && d >c)
true;
false;






  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    int arr[n+1];
    int nasc=0,ndesc=0,nnor=0;
    for(int i=1;i<=n;i++){
      cin>>arr[i];
    }
    for(int i=1;i<=n;i++){
      if(i!=arr[i] && arr[i]!=n-i+1 ){
         nnor+=1;
      }
      else if(i!=arr[i]){
        nasc+=1;
      }
      else if(arr[i]!=n-i+1){
        ndesc+=1;
      }
    }
    bool f=0,s=0,t=0;
    while(true){
        if(nasc>0){
          nasc-=1;
        }
        else if(nnor>0 && ndesc>=nnor){
          nnor-=1;
        }
        else if(nnor==0){f=1;break;}
 
 
        if(ndesc>0){
          ndesc-=1;
        }
        else if(nnor>0 && nasc>=nnor){
          nnor-=1;
        }
        else if(nnor==0){s=1;break;}
 
 
        if(nnor>0 && nasc==0 && ndesc==0){
          t=1;
          break;
        }
    }
  if(f) cout << "First" << endl;
  else if(s) cout << "Second" << endl;
  else cout << "Tie" << endl;
  }  
 
return 0;
}