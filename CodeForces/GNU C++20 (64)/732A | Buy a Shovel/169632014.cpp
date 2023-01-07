#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>
 
using namespace std; 
 
#define FIn     cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0)
 
int k{},r{};
 
int main(){
    FIn;
    cin >> k >> r;
    for (int i = 1; i < 11; i++)
    {
        if ((abs((k*i)-r)%10==0) ||    ((k*i)%10==0))
        {
        cout << i <<endl; break;}
        /* code */
    }
    
    return 0;
}