#include <iostream>
#include <string>
 
using namespace std; 
 
#define FIn     cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0)
 
unsigned long long sm{},val{},rslt{};
unsigned long long n{},b{},d{};
int main(){
    FIn;
    cin >> n >> b >> d;
    for (int i=1; i <=n ;i++ ){
        cin >> val;
        if (val <= b){
            sm+=val;
            if (sm >d){
                rslt+=1;
                sm =0; 
            }
        }
    }
    cout << rslt << endl;
    return 0;
}