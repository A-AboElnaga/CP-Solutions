#include <iostream>
#include <string>
#include<set>
 
 
using namespace std; 
 
#define FIn     cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0)
string s1;
set <char> s;
 
 
int main(){
    FIn;
    getline(cin,s1);
    for (int i = 0; i < s1.length(); i++)
    {   
        if (s1[i] -',' && s1[i] -'{' && s1[i] - '}' && s1[i] - ' '){
            s.insert(s1[i]);
        }
    }
    cout  <<  s.size();
}