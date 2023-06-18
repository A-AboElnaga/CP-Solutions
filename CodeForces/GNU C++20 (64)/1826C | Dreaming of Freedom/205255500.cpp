<algorithm>
bits/stdc++.h>
<bitset>
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
namespace std;

 file                                                                   \
"output.txt", "w", stdout);                                             \
"input.txt", "r", stdin)

FIn                                                                    \
0);                                                                  \
(0);                                                                 \
::sync_with_stdio(false)

 endl '\n'



<int> primes;
 not_prime[3005];
 least_div;
(){
int i=4;i<=3000;i+=2){
        not_prime[i]=1;
    }
    primes.push_back(2);
    for(int i=3;i<=3000;i+=2){
        if(not_prime[i])continue;
        primes.push_back(i);
        for(int j=i*i;j<=3000;j+=i){
            not_prime[j]=1;
        }
    }
 
}
 
void solve(){
    cin >> n >> m;
    least_div=n;
    for(auto el:primes){
        if(el>n)break;
        if(n%el==0){
            least_div=el;
            break;
        }
    }
    if(least_div<=m && least_div!=1){
        cout << "No" << endl;
    }
    else{
        cout << "Yes" << endl;
    }
}
 
 
int main() {
    FIn;
    //file;
    pre();
     t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}