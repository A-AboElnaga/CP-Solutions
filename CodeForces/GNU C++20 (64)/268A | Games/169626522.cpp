#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>
 
using namespace std; 
 
#define FIn     cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0)
 
int home[31],rslt{},host[31],n,arr[101];
string s;
 
int main(){
    FIn;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        /* code */
        cin >> home[i] >> host[i];
        arr[host[i]]+=1;
        }
    for (int i = 1; i <= n; i++)
    {
       rslt+=arr[home[i]];
    }
    cout <<  rslt <<endl;
    return 0;
}