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
int n,arr[(int)10e5+2]={},indx{},temp{};
 
 
int main(){
    FIn;
    cin >> n ;
    indx=n;
    for(int i =1; i <=n ;i++){
        cin >> temp;
        arr[temp]=1; 
        while (arr[indx]) {
            cout << indx <<" ";
            indx-=1;
        }
        cout <<endl;
 
    }
return 0;
}