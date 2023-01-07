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
int arr[4]={8,4,2,6};
 
int main(){
    FIn;
    cin >> n;
    if (n ==0) {cout << 1;}
    else{ 
        n-=1;
        cout << arr[n%4];
 
    }
 return 0;
}