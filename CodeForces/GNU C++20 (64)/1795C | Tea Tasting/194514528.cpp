bits/stdc++.h>

namespace std;

 file                                                                   \
"out.txt", "w", stdout);                                             \
"in.txt", "r", stdin)
 inf unsigned long long32_MAX
FIn                                                                    \
0);                                                                  \
(0);                                                                 \
::sync_with_stdio(false)
 endl '\n'

 n;
200005];
 b[200005];
200005];
 rslt[200005];
 d,sm;
 {


;

--){
 n;
int i=1;i<=n;i++){
>> a[i];
]=0;
[i]=0;

int i=1;i<=n;i++){
>> b[i];
]+=b[i-1]; 

int i=1;i<=n;i++){
]+=1;
 upper_bound(b,b+n+1,a[i]+b[i-1])-b;
      d = min(d,n);
      c[d]-=1;
      rslt[d]+=min(a[i]+b[i-1]-b[d-1],b[d]-b[d-1]);
    }
    sm=0;
    for(int i=1;i<=n;i++){
      sm+=c[i];
      rslt[i]+= (sm*(b[i]-b[i-1]));
      cout << rslt[i] << ' ';
    } cout << endl;
 
 
  }
  return 0;
}