#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>
 
using namespace std; 
 
#define FIn     cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0)
 
int home[31],rslt{},host[31],n;
string s;
 
int main(){
    FIn;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        /* code */
        cin >> home[i] >> host[i]; 
        }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
        if (home[i]==host[j]) rslt+=1;
        }
    }
    cout <<  rslt <<endl;
    return 0;
}