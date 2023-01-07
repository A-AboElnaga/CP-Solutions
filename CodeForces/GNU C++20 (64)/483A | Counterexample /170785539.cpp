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
long long n,m;
 
int main(){
    FIn;
    cin >> n >> m;
    if (m-n<2 || (m-n==2 && n%2!=0)){cout <<"-1";}
    else{ 
        if (n%2==0){cout << n << " " << n+1 << " " << n+2;}
        else{cout << n+1 << " " << n+1+1 << " " << n+2+1;}
    } 
 return 0;
}