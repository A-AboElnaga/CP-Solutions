  #include <math.h>
  #include <algorithm>
  #include <iostream>
  #include <stdlib.h>
  using namespace std;
  #define int long long unsigned int
  #define endl "\n"
  #define FIn   cin.tie(0); ios_base::sync_with_stdio(false); // fast input output read more at 
  //                                                                       (https://codeforces.com/blog/entry/90775)
  int_fast32_t main()  {           
      FIn;        // macro (this extends to the line in the definition in the header ) 
 
      const int mx = 100010; //max length of array based on the problem
      int n,arr[mx],sum_arr[mx];
      cin >> n;
      arr[0]=0;
      sum_arr[0]=0;
    //reading the array
      for (int i = 1; i < n+1; i++) { 
          cin >> arr[i];
          sum_arr[i] = sum_arr[i-1] + arr[i];
      }
      sort(arr+1, arr+n+1);
      int sorted_arr[mx]; sorted_arr[0] = arr[0]; // make sure to use the correct data type int will return an overflow or wrong answer
 
      for (int i = 1; i < n+1; i++) {
          sorted_arr[i] = sorted_arr[i-1] + arr[i];
      }
 
      int m; cin>>m; // make sure to use the correct data type int will return an overflow or wrong answer
      while (m--) {
          int t,l,r; // make sure to use the correct data type int will return an overflow or wrong answer
          cin>>t>>l>>r;
          if (t == 1) {
                  cout<<(sum_arr[r]-sum_arr[l-1]) << endl; //change [l-1] to [l-2] to include that element
              }
          else {
                  cout<<(sorted_arr[r]-sorted_arr[l-1]) << endl; //change [l-1] to [l-2] to include that element
          }
      }
      return 0;
  }