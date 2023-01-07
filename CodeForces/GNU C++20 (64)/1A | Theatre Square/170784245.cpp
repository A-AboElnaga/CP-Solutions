#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <set>
 
 
using namespace std; 
 
#define endl    '\n'
#define FIn     cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0)
long long n,m,s;
 
int main(){
    FIn;
    cin >> n >> m >>s;
    s= ceil(n/(double)s)*ceil(m/(double)s);
    cout << s;
 return 0;
}