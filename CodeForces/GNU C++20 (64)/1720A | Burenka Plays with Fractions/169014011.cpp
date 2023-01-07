#include <algorithm>
#include <iostream>
#include <string>
 
int main() {
int t;
unsigned long long a,b,c,d;
std::cin >> t;
for (size_t i = 0; i < t; i++)
{
    /* code */
    std::cin >> a >> b >> c >> d ;
    unsigned long long x = a * d, y = b * c;
    if (x==y)
    {
        std::cout << "0" << std::endl;
    }
    else if (x*y==0){
        std::cout << "1" << std::endl;
    }
    else{
       if ((y!=0 & x%y==0 ) || (x!=0 & y%x==0)){
         std::cout << "1" << std::endl;
       }
       else{
         std::cout << "2" << std::endl;
 
       }
 
    }
    
 
 
}
 
}