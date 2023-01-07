#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;
#define endl  " \n"
#define FIn ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
 
unsigned int a[101];
unsigned int n;
int main(){
 FIn;
 cin >> n;
 for (size_t i = 1; i <=n; i++)
 {
  /* code */
  cin >> a[i];
 }
 sort(a+1,a+1+n);
 for (size_t i = 1; i <=n; i++)
 {
  /* code */
  cout << a[i] <<" ";
 }
 
    return 0;
}