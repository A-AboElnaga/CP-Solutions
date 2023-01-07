#include <iostream>
#include <string>
 
using namespace std; 
 
#define FIn     cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0)
 
int x1=0,x2=0,rslt;
int main(){
    FIn;
    cin >> x1 >> x2;
    rslt = 6- max(x1,x2)+1;
    switch (rslt)
    {
    case 0:
        cout <<"0/6" <<  endl;
        break;
    
    case 1:
        cout <<"1/6" <<  endl;
        break;
    case 2:
        cout <<"1/3" <<  endl;
        break;
    case 3:
        cout <<"1/2" <<  endl;
        break;
    case 4:
        cout <<"2/3" <<  endl;
        break;
    case 5:
        cout <<"5/6" <<  endl;
        break;
    case 6:
        cout <<"1/1" <<  endl;
        break;
    }
    return 0;
}