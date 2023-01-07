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
#include <utility>

#define FIn   cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false);
#define endl '\n'
using namespace std;


int main()
{
  FIn;
  stack<char> stk;
  string s; cin >>s;
  bool arr[26]={};
  bool flag=1;
  for(char c:s){
    if(!flag) break;
    if (c=='(' || c==')'){
      if(c=='(') stk.push('(');
      else{ //
        while(!stk.empty()&& stk.top()!='('){
            arr[stk.top()-'a']=0;
            stk.pop();
        }
        if(stk.empty()) flag=0;
        else{
          stk.pop();
        }
      }
    }
    else{
      if(arr[c-'a']==0){
        arr[c-'a']=1;
        stk.push(c);
        }
      else{
        flag=0;
      }
    }
  }
  if(flag) cout << "Yes";
  else cout << "No";
  return 0;
}