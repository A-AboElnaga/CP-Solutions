#include <iostream>
#include <string>
#include <cmath>
 
 
using namespace std; 
 
#define endl    '\n'
#define FIn     cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0)
 
unsigned long n{},k{};
string s="abcdefghijklmnopqrstuvwxyz";
 
 
int main(){
    FIn;
    cin >>n >> k;
    while (n){
        for (int i = 0; i < min(k,n); i++)
        {
          cout << s[i];
        }
        n-=min(k,n);
    }
}