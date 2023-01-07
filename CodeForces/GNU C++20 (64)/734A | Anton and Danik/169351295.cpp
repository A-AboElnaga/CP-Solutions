#include <iostream>
#include <cmath>
#include <string>
using namespace std;
#define endl  " \n"
#define FIn ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
 
unsigned int n,A{},D{};
char game;
int main(){
 FIn;
 cin >> n;
 
 for (size_t i = 0; i < n; i++){
 cin >> game;
 if (game=='D') {D+=1;}
 else {A+=1;}
 }
 if (A>D){
 cout << "Anton" << endl; 
 }
 else if (D>A){
 cout << "Danik" << endl; 
 }
 else cout <<"Friendship" << endl; 
    return 0;
}