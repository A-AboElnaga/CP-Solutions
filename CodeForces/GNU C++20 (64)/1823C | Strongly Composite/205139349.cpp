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

1005];
int> freq;
<int> primes;
 not_prime[3500];
;
 valid;
(){
.push_back(2);
    for(int i=4;i<3500;i+=2){
        not_prime[i]=true;
    }
    for(int i=3;i<3500;i+=2){
        if(not_prime[i])continue;
        for(int j=i*i;j<3500;j+=i){
            not_prime[j]=true;
        }
    }
    for(int i=3;i<3500;i+=2){
        if(!not_prime[i]){
            primes.push_back(i);
        }
    }
}
 
void div(){
    for(auto i:primes){
        while(x%i==0){
            x/=i;
            freq[i]+=1;
        }
    }
    if(x>1){
        freq[x]+=1;
    }
}
 
void solve(){
    cin >> n;
    freq.clear();
    for(int i=0;i<n;i++){
        cin >> x;
        div();
    }
    rslt=0,x=0;
    for(auto el:freq){
        valid+=el.second;
        rslt+=(el.second/2);
        x+=el.second%2;
 
    }
    if(x>2){
        rslt+=x/3;
    }
 
    if(pow(2ll,(long long)valid)>=2ll*freq.size()+1){
            cout << rslt << endl;
    }
    else{
        cout << 0 << endl;
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