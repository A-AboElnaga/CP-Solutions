#include <iostream>
#include <cmath>
using namespace std;
#define endl  " \n"
 
unsigned int n{},h{},p{},rslt{};
 
int main(){
 cin >> n >> h;
 
 while(n--){
 cin >> p;
 if (p > h) {rslt+=2;}
 else {rslt+=1;}
 }
 cout << rslt << endl; 
 
    return 0;
}