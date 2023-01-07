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
int n,temp{},mx{0},mn{(int)10e9},countmx{},countmn{};
 
 
 
int main(){
    FIn;
    cin >> n ;
    for (int i = 1; i <= n; i++)
    {
        /* code */
        cin >> temp;
        if (temp > mx){
            mx =temp; countmx=1;}
        else if (temp==mx){
            countmx+=1;         }
        if (temp < mn){
            mn =temp; countmn=1;}
        else if (temp==mn){
            countmn+=1;         }           
    }
    cout <<max(0,(n-countmx-countmn));
return 0;
}