#include <math.h>
#include <algorithm>
#include <iostream>
#include <stdlib.h>
using namespace std;
#define FIn   cout.tie(0);cin.tie(0); ios_base::sync_with_stdio(false); // fast input output read more at 
//                                                                       (https://codeforces.com/blog/entry/90775)
int main()  {           
    FIn;        // macro (this extends to the line in the definition in the header ) 
 
    const long long mx = 100000; //max length of array based on the problem
    long long n,arr[mx],sum_arr[mx];
    cin >> n;
 
  //reading the array
    for (int i = 0; i < n; i++) { 
        cin >> arr[i];
    }
    sum_arr[0] = arr[0];
 
 
    for (int i = 1; i < n; i++) {
 
        sum_arr[i] = sum_arr[i-1] + arr[i];
    }
 
    sort(arr, arr+n);
 
    long long sorted_arr[mx]; sorted_arr[0] = arr[0]; // make sure to use the correct data type int will return an overflow or wrong answer
 
    for (int i = 1; i < n; i++) {
        sorted_arr[i] = sorted_arr[i-1] + arr[i];
    }
 
    long long m; cin>>m; // make sure to use the correct data type int will return an overflow or wrong answer
    for (int i = 0; i < m; i++) {
        long long t,l,r; // make sure to use the correct data type int will return an overflow or wrong answer
        cin>>t>>l>>r;
        if (t == 1) {
            if (l == 1) {
                cout<<sum_arr[r-1] << endl; //endl is added so the different outputs are on different lines 
            }
            else {
                cout<<(sum_arr[r-1]-sum_arr[l-2]) << endl; //change [l-1] to [l-2] to include that element
            }
        }
        else {
            if (l == 1) {
                cout<<sorted_arr[r-1] << endl;
            }
            else {
                cout<<(sorted_arr[r-1]-sorted_arr[l-2]) << endl; //change [l-1] to [l-2] to include that element
            }
        }
    }
    return 0;
}