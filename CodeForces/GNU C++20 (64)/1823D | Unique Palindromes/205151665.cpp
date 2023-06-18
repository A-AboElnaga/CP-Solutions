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




string useless="abc";

;
(){

    letter=3;
    ind=0;
    cin >> n >> k;
    for(int i=0;i<k;i++){
        cin >> x[i];
    }
    for(int i=0;i<k;i++){
        cin >> c[i];
    }
    if(c[0]<=x[0]){
        for(int i=0;i<c[0]-2;i++){
            s+='a';
        }
        s+="bc";
        for(int i=c[0];i<x[0];i++){
            s+=useless[ind];
            ind+=1;
            ind%=3;
        }
    }
    else{
        cout << "NO" << endl;
        return;
    }
    for(int i=1;i<k;i++){
        if(c[i]>x[i] || (c[i]-c[i-1] >x[i]-x[i-1]) ){
            cout << "No" << endl;
            return;
        }
        for(int j=0;j<c[i]-c[i-1];j++){
            s+=(char)('a'+letter);
        }
        letter+=1;
        for(int j=s.size();j<x[i];j++){
            s+=useless[ind];
            ind+=1;
            ind%=3;
        }
    }
    cout << "YES" << endl;
    cout << s << endl;
}
int main() {
    FIn;
    //file;
     t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}