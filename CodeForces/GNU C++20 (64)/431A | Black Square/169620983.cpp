#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>
 
 
using namespace std; 
 
#define FIn     cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0)
 
int main(){
    FIn;
    int arr[5]{},rslt{},val{};
    string s;
    for (size_t i = 1; i < 5; i++)
        {cin >> arr[i];}
    cin >> s;
    for(int j =0; j < s.size();j++ ){
        rslt += arr[s[j]- '0'];
    }
    cout <<rslt;
    return 0;
}