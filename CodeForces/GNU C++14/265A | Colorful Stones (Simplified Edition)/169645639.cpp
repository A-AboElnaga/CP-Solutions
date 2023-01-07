#include <iostream>
#include <string>
 
using namespace std; 
 
#define FIn     cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0)
 
int x1=0,x2=0;
string s1,s2;
int main(){
    FIn;
    cin >> s2 >> s1;
 
    for (int i=0; i<s1.size(); i++){
        if (s1[i]==s2[x2]){
            x2+=1;
        }
    }
    cout << x2+1 << endl;
    return 0;
}