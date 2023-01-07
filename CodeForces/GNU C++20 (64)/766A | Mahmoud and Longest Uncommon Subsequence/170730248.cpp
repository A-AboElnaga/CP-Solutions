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
string s1,s2; 
 
 
int main(){
    FIn;
    cin >> s1;
    cin >> s2; 
    if (s1.size() != s2.size()){
        cout << max(s1.size(),s2.size());
    }
    else if(s1!=s2){cout <<s1.size();}
    else {cout << "-1" << endl;}
 
return 0;
}