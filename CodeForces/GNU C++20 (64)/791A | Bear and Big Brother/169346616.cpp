#include <iostream>
#include <cmath>
 
using namespace std;
#define endl  " \n"
int main(){
 
 unsigned short a{},b{};
 unsigned short n{};
 cin >> a >> b;
 while (a <=b){
  a*=3;
  b*=2;
  n+=1;
 }
   cout << n <<endl;
    return 0;
}