 <algorithm>
 <cmath>
 <deque>
 <functional>
 <iomanip>
 <iostream>
 <map>
 <numeric>
 <queue>
 <set>
 <stack>
 <string>
 <unordered_set>
 <utility>
 <valarray>
 <vector>
 <sstream>

namespace std;

 file                       \
    freopen("out.txt", "w", stdout); \
    freopen("in.txt", "r", stdin)
 inf unsigned long long32_MAX
FIn    \
tie(0);  \
tie(0); \
    ios_base::sync_with_stdio(false)
 endl '\n'


()


// file;
 cin >> t;
t--){
      string s; cin >> s;
 c_a=0,c_b=0;
      for(auto c:s){
        if(c=='a')c_a+=1;
      }
      c_b=s.size()-c_a;
      if(c_b==0){
        cout << 'a' << ' ' << s.substr(1,s.size()-2) <<' ' << 'a' << endl;
      }
      else if(c_a==0){
         cout << 'b' << ' ' << s.substr(1,s.size()-2) << ' '<<'b' << endl;
      }
      else{
        // b>=
        bool flag=0;
        string a,b,c;
        a+=s[0];
        for(int i=1;i<s.size();i++){
          if(s[i]!='b'){
            a+='a';
          }
          else{break;}
        }
        if(s.size()==a.size()){
          flag=0;
 
        }
        else{
          b=s.substr(a.size(),s.size()-a.size()-1);
          c=s[s.size()-1];
          if(b>=c && b>=a && b.size()!=0 && c.size()!=0){
              cout << a << ' ' << b << ' ' << c << endl;
              flag =1;
          }
 
        }
        //b<=
        if(flag==0)
        {a.clear(),b.clear(),c.clear();
        a+=s[0];
        for(int i=1;i<s.size();i++){
          if(s[i]!='a'){
            a+='b';
          }
          else{break;}
        }
        if(s.size()==a.size()){
          flag=0;
        }
        else{
          b=s[a.size()];
          c=s.substr(a.size()+1,s.size()-a.size()-1);
          if(b<=c && b<=a && b.size()!=0 && c.size()!=0){
              cout << a << ' ' << b << ' ' << c << endl;
              flag =1;
          }
 
        }
        }
        
        if(flag==0) cout <<  ":(" << endl;
 
      }
    }
  return 0;
  }