#include <iostream>
#include <string>
 
using namespace std; 
 
#define FIn     cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0)
 
int arr[101],m,n,x,y,i;
 
int main(){
    FIn;
    cin >> n ;
    for (int i=1; i <=n ;i++ ){
        cin >> arr[i];
    }
    cin >> m ;
    i=1;
    while(m--){
        cin >> x >> y;
        if (x >1) arr[x-1]+=y-1;
        if (x <n) arr[x+1]+=arr[x]-y;
        arr[x]=0;
    }
    for (int i=1; i <=n ;i++ ){
       cout << arr[i] <<endl;
    }
    return 0;
}