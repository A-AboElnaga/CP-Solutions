#include <iostream>
#include <string>
#include<set>
 
 
using namespace std; 
 
#define endl    '\n'
#define FIn     cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0)
 
string s;
int n;
 
 
 
int main(){
    FIn;
    cin >> n;
    while(n--){
        cin >> s;
        if (s.size() > 10){
            cout  << s[0] <<  s.size()-2 << s[s.size()-1] <<endl;
        }
        else{ cout <<  s << endl ;}
    }
}