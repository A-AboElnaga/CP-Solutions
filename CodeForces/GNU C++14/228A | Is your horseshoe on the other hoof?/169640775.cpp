#include <iostream>
#include<set>
 
using namespace std; 
 
#define FIn     cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0)
 
set<int> input{};
int x;
 
int main(){
    FIn;
    
    for (int i = 1; i < 5; i++)
    {   cin >> x;
        input.insert(x);
    }
    cout << 4-input.size() << endl;
    return 0;
}