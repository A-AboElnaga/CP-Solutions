#include <iostream>
#include <string>
#include<set>
 
 
using namespace std; 
 
#define endl    '\n'
#define FIn     cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0)
 
unsigned long n{},c1{},c2{},c3{},temp{},mn;
int t1[5001],t2[5001],t3[5001];
 
 
int main(){
    FIn;
    cin >>n;
    for (int i = 1; i <= n ; i++)
    {
        cin >> temp;
        switch (temp)
        {
        case 1:
            c1+=1;
            t1[c1]=i;
            break;
        case 2:
            c2+=1;
            t2[c2]=i;
            break;
        case 3:
            c3+=1;
            t3[c3]=i;
            break;
        }   
    }
    mn = min(min(c1,c2),c3);
    cout << mn << endl;
    for (int i = 1; i <= mn; i++)
    {
        cout << t1[i] << " " << t2[i] << " " << t3[i] <<endl;
    }
    
    
    
}