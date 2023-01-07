#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <set>
 
 
using namespace std; 
 
#define endl    '\n'
#define FIn     cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0)
int n{},t{},m{},a{};
string rslt;
 
 
int main(){
    FIn;
    a= 4126;
    cin >> t;
    while (t--){
    cin >> n >> m;
    if (abs(n-m)){
        rslt = "rated" ;
        break;
    }
    else if(m>a){
        rslt="unrated";
    }
    else if(rslt!="unrated") {rslt="maybe";}
    a=m;
    }
    while(t>0){t--; cin >> n >> m;}
    cout << rslt;
return 0;
}