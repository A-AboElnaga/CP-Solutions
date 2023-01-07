#include <iostream>
#include <string>
#include<set>
 
 
using namespace std; 
 
#define endl    '\n'
#define FIn     cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0)
 
unsigned long long n{},x{},val{},kids{};
char sn{};
 
 
int main(){
    FIn;
    cin >> n >> x;
    while(n--){
        cin >> sn >> val;
        if (sn == '-' && val <= x) {x-=val;}
        else if(sn == '+'){x+=val;}
        else {kids+=1;}
    }   
    cout << x << " " << kids; 
}