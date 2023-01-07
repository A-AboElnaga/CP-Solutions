#include <iostream>
#include <string>
#include <cmath>
 
using namespace std; 
 
#define FIn     cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0)
 
int n{},t{},k{},d{};
int current{}; 
 
int main(){
    FIn;
    cin >> n >> t >> k >> d;
    
    while (current <= d){
        n-=k;
        current+=t;
    }
    if ( n > 0){
        cout <<"YES";
    }
    else{cout << "NO";}
    return 0;
}