#include <iostream>
#include <string>
#include<bits/stdc++.h>
 
using namespace std; 
 
string s1,s2 ;
 
 
 
 
int main(){
    cin >> s1 >> s2;
    transform(s1.begin(),s1.end(),s1.begin(),::tolower);
    transform(s2.begin(),s2.end(),s2.begin(),::tolower);
 
    if (s1 > s2){
        cout << 1 << endl;
    }
    if (s1 == s2){
        cout << 0 << endl;
    }
    if (s1 < s2){
        cout << -1 << endl;
    }
    return 0;
}