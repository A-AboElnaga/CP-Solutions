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
long long n{},k{};
 
int main(){
    FIn;
    cin >> n >> k ;
    n = ceil(n/(double)2);
    if (k <=n){
        cout << (2*k -1);
    }
    else{
        cout << 2*(k-n) ;
        }
return 0;
}