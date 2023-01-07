#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>
 
using namespace std; 
 
 
 
int main(){
    int n,rslt;
    char next, current;
    rslt=0;
    cin >> n;
    cin >> current;  
    n-=1;
    while(n--)
    {
    cin >> next ;
    if  (next == current){
        rslt +=1;
    } 
    else{
        current = next;
    }
    }
 
    cout <<rslt;
    return 0;
}