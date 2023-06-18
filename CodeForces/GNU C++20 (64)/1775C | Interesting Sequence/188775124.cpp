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






;
--)

    long long n,x; cin >> n >> x;
    string bi_x = bitset<64>(x).to_string();
    string bi_n = bitset<64>(n).to_string();
    if(x>n) cout << -1 << endl;
    else{
      int left=0;
      //left = left most 1
      for(int i=0;i<64;i++){
        if(bi_n[i]=='0'){
          left=i;
          break;
        }
      }
      bool flag=1;
      //from 0 to 1 impossible
      for(int i=63;i>=left && flag;i--){
        if(bi_n[i]=='0' && bi_x[i]=='1'){
            flag=0;
            break;
        }
      }
        for(int i=left;i<64 && flag;i++){
          if(bi_n[i]=='1' && bi_x[i]=='1'){
            continue;
          }
        // if 1111 to 1110 impossible
          if(bi_n[i]=='1' && bi_x[i]=='0'){
            flag =0;
            break;
          }
        //left = first zero after ones
          if(bi_n[i]=='0' && bi_x[i]=='0'){
            left=i; break;
          }
        }
        for(;left<64;left++){
          if(bi_n[left]=='1' && bi_x[left]=='0'){
            break;
          }
        }
        for(int i=left;i<64&&flag;i++){
          if(bi_x[i]!='0'){
            flag=0;
            break;
          }
        }
        long long val = pow(2ll,64-(long long)left);
        val = val&n;
        long long rslt = pow(2ll,64-(long long)left)- val;
        if(rslt==0 && x!=n) flag=0;
        if(left==64) rslt=0;
        rslt +=(long long)x;
 
 
        if(flag==0) cout << -1 << endl;
        else{
          cout << rslt << endl;
        }
    }
  }
 
  return 0;
}