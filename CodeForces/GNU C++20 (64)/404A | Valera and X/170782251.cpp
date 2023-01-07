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
int n{},t{};
string s;
set<char> sd;
set<char> so;
 
int main(){
    FIn;
    cin >> n;
    for (int i = 0; i < n; i++)
    {   cin >> s;
        for (int j = 0; j < n; j++)
        {
            if (i==j){sd.insert(s[j]);}
            else if (i==(n-j-1)){sd.insert(s[j]);}
            else {so.insert(s[j]);}
        }
    }
    if (sd.size()==1 && so.size()==1 && sd!=so){
        cout << "YES";
    }
    else{ cout<<"NO";}
 return 0;
}