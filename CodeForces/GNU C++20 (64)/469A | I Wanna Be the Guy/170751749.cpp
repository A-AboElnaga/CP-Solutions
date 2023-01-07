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
int n{},temp{},m{};
int arr[101]{};
 
 
int main(){
    FIn;
    cin >> n;
    cin >> m;
    while(m--){
        cin >>temp;
        arr[temp]=1;
    }
    cin >> m;
    while(m--){
        cin >>temp;
        arr[temp]=1;
    }
    m=0;
    for (int i = 1; i <= n; i++)
    {
        m+=arr[i];
    }
    (m==n)? cout <<"I become the guy." : cout << "Oh, my keyboard!"; 
    
return 0;
}