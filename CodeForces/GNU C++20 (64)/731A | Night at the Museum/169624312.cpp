#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>
 
using namespace std; 
 
#define FIn     cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0)
 
int current{0},rslt{},targ{};
string s;
 
int main(){
    FIn;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        targ = (s[i]-'a');
        rslt+=min(abs(targ-current),abs(abs(targ-current)-26));
        current= targ;
        }
    cout <<  rslt <<endl;
    return 0;
}