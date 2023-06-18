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
d,w;
200005];


,pc,v_time,vc;
 v_flag;



  FIn;
//   file;
  cin >> t;
  while(t--){
    cin >> n >> k >> d >> w;
    rslt=0;
    for(int i=0;i<n;i++){
      cin >> arr[i];
    }
    //init
    v_time=0;v_flag=0; 
    p_time=0;pc=0;
    l=0; vc=k;
 
    for(;l<n;l++){
      //if pack open
      if(v_flag && arr[l]<=v_time){
        vc-=1;
        pc=0;
        if(vc==0){
          v_flag=0;
          vc=k;
        }
        continue;
      }
      
      //pack exp
      if(v_flag && arr[l]>v_time){
        vc=k;
        v_flag=0;
      }
 
      //new pack
      if(pc==0){
        p_time=arr[l]+w;
      }
      
      //p can join pack;
      if(arr[l]<=p_time){
        pc+=1;
      }
      else{
        //open pack
        rslt+=1;
        vc=k-pc;
        v_time=p_time+d;
        if(vc>0 && arr[l]<=v_time){
          vc-=1;
          pc=0;
          if(vc>0) v_flag=1;
          else{v_flag=0; vc=k;}
        }
        else{
          v_flag=0;
          vc=k;
          pc=1;
          p_time=arr[l]+w;
        }
      }
      //pack p
      if(pc==k){
        rslt+=1;
        pc=0;
        vc=k;
        v_flag=0;
      }
 
    }
    //remaining ps;
    if(pc>0){
      rslt+=1;
    }
    cout << rslt << endl;
 
  }
  return 0;
}