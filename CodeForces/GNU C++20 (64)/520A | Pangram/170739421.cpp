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
int n,arr[26]={};
string s;
 
 
int main(){
    FIn;
    cin >> n ;
    cin >>s;
    if (n <26){
        cout <<"NO";
    }
    else{
        n=0;
        transform(s.begin(),s.end(),s.begin(),::tolower); 
        set <char> st(s.begin(),s.end());
        n= st.size();
        (n==26)? cout <<"YES" : cout <<"NO";
    }
return 0;
}