#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>
 
using namespace std; 
 
#define FIn     cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0)
 
int rslt{},arr[5]{},c;
 
int main(){
    FIn;
    
    for (int i = 1; i < 5; i++)
    {   cin >> c;
        if (c!=arr[1] && c!=arr[2] && c!=arr[3] && c!=arr[4]){
            arr[i]=c;
            rslt+=1;
        }
    }
    cout << 4-rslt << endl;
    return 0;
}