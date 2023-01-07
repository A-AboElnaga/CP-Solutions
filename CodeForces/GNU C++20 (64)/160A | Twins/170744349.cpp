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
int n,t{},sum{},arr[101]={};
 
 
int main(){
    FIn;
    cin >> n ;
 
    for (int i = 1; i <= n ; i++)
    {
        cin >> arr[i];
        /* code */
        sum+=arr[i];
    }
    sort(arr+1,arr+n+1,std::greater<int>());
    n=0;
    while(t<=(sum/2)){
         n+=1; t+=arr[n];
    }
    cout << n;
return 0;
}