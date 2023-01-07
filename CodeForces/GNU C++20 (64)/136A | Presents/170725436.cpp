#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <set>
 
using namespace std; 
 
// #define endl    '\n'
#define FIn     cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0)
int M[101]={},n{},temp{};
 
 
 
int main(){
    FIn;
    cin >> n; 
    for (int i = 1; i <=n; i++)
    {
        cin >> temp;
        M[temp]=i;
    }
    for (int i = 1; i <=n; i++)
    {
        cout << M[i] << " ";
    }
    cout <<endl;
 
return 0;
}