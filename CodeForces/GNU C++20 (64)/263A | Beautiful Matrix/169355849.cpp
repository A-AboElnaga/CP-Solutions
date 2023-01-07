#include <iostream>
#include <cmath>
#include <string>
using namespace std;
#define endl  " \n"
#define FIn ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
 
unsigned int C{};
int main(){
 FIn;
 for (int i = 0; i < 5; i++)
 { for (int j = 0;j < 5; j++)
  {
   cin >> C;
   if (C==1){
    cout << (abs(2-i)+abs(2-j));
   }
  }
  
 }
 
 
    return 0;
}