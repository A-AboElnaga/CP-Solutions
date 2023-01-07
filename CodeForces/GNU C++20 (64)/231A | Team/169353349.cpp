#include <iostream>
#include <cmath>
#include <string>
using namespace std;
#define endl  " \n"
#define FIn ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
 
unsigned int n{},a{},b{},c{},rslt{};
int main(){
 FIn;
 cin >> n;
 
 for (size_t i = 0; i < n; i++){
 cin >> a >> b >>c;
 if (a+b+c > 1) {rslt+=1;}
 }
 cout << rslt << endl; 
    return 0;
}