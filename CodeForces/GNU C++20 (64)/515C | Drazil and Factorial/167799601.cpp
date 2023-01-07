#include <bits/stdc++.h>
using namespace std; 
 
 
int main(){
    string mapper[]={"","","2","3","322","5","53","7","7222","7332"},rslt="",num;
    int n ;
    cin >> n >> num;
    for (int i = 0; i < n; i++)
        rslt += mapper[num[i]-'0'];
    
    sort(rslt.rbegin(),rslt.rend());
    cout<<rslt<<endl;
}