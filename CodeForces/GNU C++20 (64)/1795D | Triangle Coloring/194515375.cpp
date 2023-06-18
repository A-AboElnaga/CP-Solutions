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

 w;
 m  = 998244353;
 F[100005];
];
 rslt;


(){
 i=1;i<100005;i++){
[i-1]*i%m;


int i) {
 i <= 1 ? i : m - (long long)(m/i) * inv(m % i) % m;


 nCr(long long n,long r){
n]*inv(F[n-r])%m)*inv(F[r]))%m;

; 


 {


  F[0]=1;
  fact();
  rslt =1;
  cin >> n;
  n/=3;
  for(int i=0;i<n;i++){
    for(int j=0;j<3;j++){
      cin >> arr[j];
    }
    sort(arr,arr+3);
    x=1;
    if(arr[1]==arr[0])x+=1;
    if(arr[2]==arr[0])x+=1;
    rslt=(rslt*x)%m;
  }
  rslt= rslt*(nCr(n,n/2))%m;
  cout << rslt;
 
  return 0;
}