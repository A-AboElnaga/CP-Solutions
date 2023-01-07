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
int n;
long long rslt{};
string s;
int arr[5]={4,6,8,12,20};
 
int main(){
    FIn;
    cin >> n;
    while(n--){
        cin >> s;
        
        if(s[0]=='T'){ rslt+=arr[0];}
        else if (s[0]=='C'){ rslt+=arr[1];}
        else if (s[0]=='O'){ rslt+=arr[2];}
        else if (s[0]=='D'){ rslt+=arr[3];}
        else { rslt+=arr[4];}
    }
    cout << rslt;
 return 0;
}