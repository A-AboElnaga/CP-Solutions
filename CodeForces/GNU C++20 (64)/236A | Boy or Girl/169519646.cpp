#include <iostream>
#include <string>
 
using namespace std; 
 
string s1;
int arr[101]={0};
 
int main(){
    int dis = 0;
    cin >> s1;
    for (auto c :s1)
    {
        if (!arr[(int(c)-'a')])
        {
            arr[(int(c)-'a')] =1;
            dis +=1;
        }
    }
    if(dis%2 == 0){
        cout << "CHAT WITH HER!" << endl; 
    }
    else{
        cout << "IGNORE HIM!" << endl; 
    }
    return 0;
}