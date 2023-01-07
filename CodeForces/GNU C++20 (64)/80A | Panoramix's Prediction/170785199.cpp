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
int n,m,c;
int arr[]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
int find( int n){
    int arr[]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    int c{50};
    for (int i = 0; i < 15; i++)
    {  
        if (arr[i]==n){
            c= i;
            return c;
        }
    }
    
    return c;
}
int main(){
    FIn;
    cin >> n >> m;
    c= find(n);
    (c+1 < 15 && m==arr[c+1])? cout << "YES" : cout <<"NO";
 
 return 0;
}