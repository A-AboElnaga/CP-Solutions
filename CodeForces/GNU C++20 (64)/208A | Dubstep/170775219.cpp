#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <set>
 
 
using namespace std; 
 
#define endl    '\n'
#define FIn     cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0)
int c;
string s;
 
 
int main(){
    FIn;
    cin >>s; 
    c=s.find("WUB");
    while(c!=-1){
        s[c]=' '; s.erase(c+1,2);
        c=s.find("WUB");
    }
    cout <<s;
 return 0;
}