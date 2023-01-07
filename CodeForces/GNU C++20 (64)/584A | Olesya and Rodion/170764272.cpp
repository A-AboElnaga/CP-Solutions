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
int n{},t{};
string rslt;
 
 
int main(){
    FIn;
    cin >> n >> t;
    if (n ==1 && t<10){cout << t;}
    else if (n==1){cout <<"-1";}
    else if (t==10){cout<<"1"; n-=1;
                    while(n--){cout<<"0";}}
    else{while(n--){cout<<t;}}
    return 0;
}