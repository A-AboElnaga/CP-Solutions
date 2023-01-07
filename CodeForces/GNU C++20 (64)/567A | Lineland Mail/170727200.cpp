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
int M[(int)10e5+2]={},n{},temp{};
 
 
 
int main(){
    FIn;
    cin >> n; 
    for (int i = 1; i <=n; i++)
    {
        cin >> M[i];
    }
    M[0]=M[n]; M[n+1] =M[1];
    for (int i = 1; i <=n; i++)
    {
        cout << min(abs(M[i]-M[i-1]),abs(M[i]-M[i+1])) << " " << max(abs(M[i]-M[1]),abs(M[i]-M[n])) << endl;
    }
 
return 0;
}