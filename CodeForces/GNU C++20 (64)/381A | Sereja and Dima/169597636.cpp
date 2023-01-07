#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>
 
using namespace std; 
 
 
int S,D,n,arr[1001];
int P1,P2;
 
int main(){
    cin >> n;
    P1=1; P2=n;
    for (short i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    while(P1 < P2)
    {
        if (arr[P1] > arr[P2]){
            S+=arr[P1]; P1+=1;
        }
        else {S+=arr[P2]; P2-=1;}
 
        if (arr[P1] > arr[P2]){
            D+=arr[P1]; P1+=1;
        }
        else {D+=arr[P2]; P2-=1;}
    
    }
    if (n%2==1){
        S+= min(arr[P1],arr[P2]);
    }
 
    cout << S << " " << D;
    return 0;
}