#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>
 
using namespace std; 
 
int rslt, temp1,temp2,n;
 
 
 
 
 
int main(){
    cin >> n;
    cin >> temp1;
    rslt+=1;
    n-=1;
    while(n--){
    cin >>temp2;
    if (temp2==temp1){continue;}
    else {
        temp1 = temp2;
        rslt +=1;
        }
    }
    cout << rslt;
    return 0;
}