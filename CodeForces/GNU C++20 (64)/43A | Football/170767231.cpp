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
int n{},t1{},n_cons{};
string team1,tst,team2;
 
 
int main(){
    FIn;
    cin >> n; n_cons=n; n-=1;
    cin >> team1; t1=1;
    while(n--){
     cin >>tst;
     if (tst==team1){
        t1+=1;
     }
     else{
        team2=tst;
     }
    }
    if (t1>(n_cons)/2){
        cout << team1; 
    }
    else{cout << team2;}
 return 0;
}