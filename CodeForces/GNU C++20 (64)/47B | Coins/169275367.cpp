#include <math.h>
#include <algorithm>
#include <iostream>
using namespace std;
#define endl "\n"
#define FIn   cin.tie(0); ios_base::sync_with_stdio(false);
 
string s;
int val[3];
 
int main(){
    for(int c=0;c<3;c++){  
        cin >> s;
        if (s[1] =='>') val[s[0]-'A']++;
        else val[s[2]-'A']++;
        }
    if (val[0]==val[1] || val[1]==val[2] || val[0]==val[2]) cout<<"Impossible"<<endl;
    else{
        for(size_t i =0; i<3; i++){
            for(size_t j=0; j<3; j++){
                if (val[j]==i) cout <<char('A'+j);
            }
          }
        }
 
return 0;    
}