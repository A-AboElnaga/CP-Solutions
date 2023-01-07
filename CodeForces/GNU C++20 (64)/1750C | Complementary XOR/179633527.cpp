#include <iostream>
#include <string>
#include <iomanip>
#include <numeric>
#include <cmath>
#include <vector>
#include <algorithm>
#include <set>
#include <valarray>
#include <queue>
#include <unordered_set>
#include <map>
#include <stack>
#include <deque>
 
#define FIn    cin.tie(0);  cout.tie(0); ios_base::sync_with_stdio(false);
#define endl '\n'
using namespace std;
 
 
 
int main()
{
  FIn;
  int t; cin >>t;
  while(t--){
    int n; cin >> n;
    string s1,s2; cin >>s1 >>s2;
    int r_0{},cs1_0{},cs2_0{};
 // vector <int> prf_s1_0(n+1,0),prf_s2_0(n+1,0);
    vector <pair<int,int>> s1_0_loc;
 
    int x=-1,y=-1;
 
    for(int i =0 ; i < n ; i++){
      if(s2[i]!=s1[i])r_0+=1; //yes or no based on xor
      if(s1[i]=='0'){   //count 0 in s1, find 0 subseq start
        cs1_0+=1;
        if(x==-1)x=i+1;
        if(y==-1) y=x;
      }
      else if(s1[i]=='1' && x!=-1){       //find 0 subseq end, push back the range, reset x, y;
        y=i;
        s1_0_loc.push_back(make_pair(x,y));
        x=-1;y=-1;
      }
      //prf_s1_0[i+1]=cs1_0;        //prefix count num of 
      if(s2[i]=='0') cs2_0+=1;
      //prf_s2_0[i+1]=cs2_0;
   }
    // 0 at the end??
    if(x!=-1){
      s1_0_loc.push_back(make_pair(x,n));
    }
    
   if(r_0==0 || r_0 ==n){
    cout << "YES" << endl;
    //print
    int sz = s1_0_loc.size();
    if(cs1_0==0){
        if(cs2_0==0){
            cout << 2 <<endl;
            cout << "1 1" <<endl << "2 " << n <<endl;
            continue;
        }
        else if(cs2_0==n){
          cout << 1 << endl;
          cout <<"1 " << n <<endl;
          continue;
        }
    }
    else if (cs1_0==n){
        if(cs2_0==n){
          cout << 0 << endl;
          continue;
        }
    }
    if(sz%2==0){ //even
      if(r_0==0){//1s
          cout << sz+2 <<endl;
          for(auto loc:s1_0_loc){
           cout << loc.first <<' ' << loc.second <<endl;
          }
          cout << "1 1" <<endl << "2 " << n <<endl;
      }
      else{ //0s
          cout << sz+1 <<endl;
          for(auto loc:s1_0_loc){
           cout << loc.first <<' ' << loc.second <<endl;
          }
          cout <<"1 " << n <<endl;
      } 
    }
    else{ //odd
      if(r_0==0){//1s
          cout << sz+1 <<endl;
          for(auto loc:s1_0_loc){
           cout << loc.first <<' ' << loc.second <<endl;
          }
          cout <<"1 " << n <<endl;
      }
      else{ //0s
          cout << sz+2 <<endl;
          for(auto loc:s1_0_loc){
           cout << loc.first <<' ' << loc.second <<endl;
          }
          cout << "1 1" <<endl << "2 " << n <<endl;
      } 
    }
   }
   else cout  << "NO" << endl; 
  }
  return 0;
}