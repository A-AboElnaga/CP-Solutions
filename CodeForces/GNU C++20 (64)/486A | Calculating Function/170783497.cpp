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
long long n{};
 
int main(){
    FIn;
    cin >> n;
    if (n%2==0){
        cout<<n/2;
    }
    else{cout <<-(n+1)/2;}
 return 0;
}