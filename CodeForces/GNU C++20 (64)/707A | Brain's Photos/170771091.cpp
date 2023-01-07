#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <set>
 
 
using namespace std; 
 
//3#define endl    '\n'
#define FIn     cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0)
int n{},m{},f{};
char c{};
 
 
int main(){
    FIn;
    cin >> n >> m;
    n= n*m;
    while(n>0){
        n--;
        cin >> c;
        if (c=='C' || c=='M' || c=='Y'){
            f=1;
            break;
        }
       
    }
 
    while(n>0){n--; cin >> c;} 
    if (f==0){ cout << "#Black&White";}
    else     { cout << "#Color";}
 return 0;
}