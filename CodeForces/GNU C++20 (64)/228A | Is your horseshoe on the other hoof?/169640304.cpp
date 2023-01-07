#include <iostream>
 
using namespace std;
 
int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
 
    int distinct;
    distinct = 1;
    
    if (b != a)
        distinct += 1;
    if (c != a && c != b)
        distinct += 1;
    if (d != a && d != b && d != c)
        distinct += 1;
 
    cout << (4 - distinct) << endl;
 
    return 0;
}