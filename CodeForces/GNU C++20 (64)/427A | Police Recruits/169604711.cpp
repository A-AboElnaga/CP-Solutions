#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>
 
using namespace std; 
 
 
 
int main(){
    int n{},rslt{},temp{},thiv{},ofc{};
    cin >> n;
    while(n--)
    {
    cin >> temp ;
    if  (temp <0 && ofc==0 ){
        rslt +=1;
    } 
    else if (temp <0){
        ofc-=1;
    }
    else{
        ofc+=temp;
    }
    }
 
    cout <<rslt;
    return 0;
}