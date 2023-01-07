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
 
#define FIn    \
  cin.tie(0);  \
  cout.tie(0); \
  ios_base::sync_with_stdio(false);
#define endl '\n'
using namespace std;
 
 
int main()
{
  FIn;
  string n;
  cin >> n;
  // > 7744     , 4777,  4444,    4775, 7477
  if(n.size()%2==1){
    int sz= n.size()+1;
    for(int i=0;i<sz/2;i++) cout << 4;
    for(int i=0;i<sz/2;i++) cout << 7;
    return 0;
  }
  int sz = (n.size()+(n.size()%2)) / 2; // change odd
  int s7 = sz, s4 = sz;
  string rslt = "";
  bool flag_bigger = 0;
  //<iter,<s7,s4>>
  vector<pair<std::reverse_iterator<std::string::iterator>,pair<int,int>>> ind4_7rem;
  for (auto it = n.begin(); it != n.end() && flag_bigger == 0; it++)
  {
    // is the digit less than 4?
    if (*it-'0' < 4)
      {
        if(s4>0)
          {rslt += '4';
            s4 -= 1;
        }
        else if(s7>0){
        rslt += '7';
        s7 -= 1;
        }
        flag_bigger=1;
        break;
      }
    //==4
    else if(*it-'0' ==4){
        if(s4>0)
          {rslt += '4';
            ind4_7rem.push_back(make_pair(rslt.rbegin(),make_pair(s7,s4)));
            s4 -= 1;
        }
        else if(s7>0){
          rslt += '7';
          s7 -= 1;
          flag_bigger=1;
          break;
        }
      }
    // <7???
    else if(*it-'0'<7){
        if(s7>0)
          {rslt += '7';
            s7 -= 1;
            flag_bigger=1;
            break;
        }
        else{
          if(sz>s4){
            //no  more 7s
            for(auto iti=ind4_7rem.rbegin();iti!=ind4_7rem.rend();iti++){
                if(iti->second.first>0){
                  *(iti->first)='7';
                  s7=iti->second.first-1;
                  s4=iti->second.second;
                  rslt = rslt.substr(0,distance(iti->first,rslt.rend()));
                  flag_bigger=1;
                  break;
                }
            }
            if(!flag_bigger){
            rslt="";
            s7=sz+1;
            s4=sz+1;
            flag_bigger=1;
            break;}
          }
          else{
              flag_bigger=1;
              s7=sz+1;
              s4=sz+1;
              rslt="";
              break;
          }
 
        }
    }
    // ==7
    else if(*it-'0'==7){
      if(s7>0)
          {rslt += '7';
            s7 -= 1;
        }
      else{
          if(sz>s4){
            for(auto iti=ind4_7rem.rbegin();iti!=ind4_7rem.rend();iti++){
                if(iti->second.first>0){
                  *(iti->first)='7';
                  s7=iti->second.first-1;
                  s4=iti->second.second;
                  rslt = rslt.substr(0,distance(iti->first,rslt.rend()));
                  flag_bigger=1;
                  break;
                }
            }
            if(!flag_bigger){
            rslt="";
            s7=sz+1;
            s4=sz+1;
            flag_bigger=1;
            break;}
          }
          else{
              flag_bigger=1;
              s7=sz+1;
              s4=sz+1;
              rslt="";
              break;
          }
      }
    }
    else{
      if(sz>s4){
            for(auto iti=ind4_7rem.rbegin();iti!=ind4_7rem.rend();iti++){
                if(iti->second.first>0){
                  *(iti->first)='7';
                  s7=iti->second.first-1;
                  s4=iti->second.second;
                  rslt = rslt.substr(0,distance(iti->first,rslt.rend()));
                  flag_bigger=1;
                  break;
                }
            }
            if(!flag_bigger){
            rslt="";
            s7=sz+1;
            s4=sz+1;
            flag_bigger=1;
            break;}
      }
      else{
        flag_bigger=1;
        s7=sz+1;
        s4=sz+1;
        rslt="";
        break;
      }
    }
  }
  cout<< rslt;
  for(int i=0;i<s4;i++){
    cout<<4;
  }
  for(int i=0;i<s7;i++){
    cout<<7;
  }
  return 0;
}