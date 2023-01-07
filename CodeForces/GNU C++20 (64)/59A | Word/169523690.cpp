#include <iostream>
#include <string>
#include <bits/stdc++.h>
 
using namespace std; 
 
string s1 ;
int l=0,u=0;
 
 
 
 
 
int main(){
    cin >> s1 ;
 
    for(auto c:s1){
        if (islower(int(c))){
            l+=1;
        }
        else {
            u+=1;
        }
    }
    if (l >=u)
        transform(s1.begin(),s1.end(),s1.begin(),::tolower);
    else {
        transform(s1.begin(),s1.end(),s1.begin(),::toupper);
    }
    cout << s1 << endl;
    return 0;
}