#include <iostream>
#include <string>
#include<set>
 
 
using namespace std; 
 
#define endl    '\n'
#define FIn     cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0)
 
unsigned long long n3{},n2{},n1{};
string sn{};
 
 
int main(){
    FIn;
    getline(cin,sn);
    for (auto c :sn){
        switch (c)
        {
        case '1':
            n1+=1;
            break;
        case '2':
            n2+=1;
            break;
        case '3':
            n3+=1;
            break;    
        default:
            break;
        }
    }
    while (n1 || n2 || n3){
        if (n1){cout << '1'; n1-=1;}
        else if (n2){cout << '2';n2-=1;}
        else if (n3){cout << '3';n3-=1;}
        if (n1+n2+n3){cout <<'+';}
    }
}