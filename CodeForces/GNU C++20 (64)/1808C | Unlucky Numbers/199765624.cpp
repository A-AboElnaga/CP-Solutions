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
<bitset>
bits/stdc++.h>
namespace std;

 file                       \
"out.txt", "w", stdout); \
"in.txt", "r", stdin)
 inf unsigned long long32_MAX
FIn    \
0);  \
(0); \
::sync_with_stdio(false)
 endl '\n'

unsigned long long l,r;
mn,mx,loc,tmp1_val,tmp2_val;
cmx;
string srslt,sl,sr,tmp1,tmp2,sl_solved,sr_solved;

string check(){
cmx=0;
 c:tmp1){
min(cmn,c-'0');
    cmx=max(cmx,c-'0');
  }
  tmp1_val=cmx-cmn;
 
  cmn=9,cmx=0;
  for(auto c:tmp2){
    cmn=min(cmn,c-'0');
    cmx=max(cmx,c-'0');
  }
  tmp2_val=cmx-cmn;
 
  if(tmp1_val<=tmp2_val){
      return tmp1;
  }
  else{
    return tmp2;
  }
}
 
string true_problem_sl(int i,int loc_mn,int loc_mx,string loc_rslt){
    int best=10;
    char best_with;
    if(loc_rslt.size()==sl.size()){
      return loc_rslt;
    }
    if(loc_mx>(sl[i]-'0')){
      while(loc_rslt.size()<sl.size()){
        loc_rslt.push_back(('0'+loc_mx));
      }
      return loc_rslt;
    }
    for(int j=(sl[i]-'0')+1;j<=9;j++){
       if(best>(max(loc_mx,j)-min(loc_mn,j))){
        best_with='0'+j;
        best=(max(loc_mx,j)-min(loc_mn,j));
       }
    }
 
    tmp1 = true_problem_sl(i+1,min(loc_mn,sl[i]-'0'),max(loc_mx,sl[i]-'0'),loc_rslt+sl[i]);
    if(best!=10){
      tmp2=loc_rslt;
      while(tmp2.size()<sl.size()){
          tmp2.push_back(best_with);
      }
      tmp1 = check();
    }
    return tmp1;
 
}
string true_problem_sr(int i,int loc_mn,int loc_mx,string loc_rslt){
     int best=10;char best_with;
    if(loc_rslt.size()==sr.size()){
      return loc_rslt;
    }
    if(loc_mn<(sr[i]-'0')){
      while(loc_rslt.size()<sr.size()){
        loc_rslt.push_back('0'+loc_mn);
      }
      return loc_rslt;
    }
    for(int j=0;j<sr[i]-'0';j++){
       if(best>(max(loc_mx,j)-min(loc_mn,j))){
        best_with='0'+j;
        best=(max(loc_mx,j)-min(loc_mn,j));
       }
    }
    tmp1 = true_problem_sr(i+1,min(loc_mn,sr[i]-'0'),max(loc_mx,sr[i]-'0'),loc_rslt+sr[i]);
    if(best!=10){
      tmp2=loc_rslt;
      while(tmp2.size()<sr.size()){
          tmp2.push_back(best_with);
      }
      tmp1 = check();
    }
    return tmp1;
}
 
 
string sub_problem(int i,int loc_mn,int loc_mx,string loc_rslt){
    //try sl[i]
    sl_solved = true_problem_sl(i+1,min(loc_mn,sl[i]-'0'),max(loc_mx,sl[i]-'0'),loc_rslt+sl[i]);
    //try sr[i];
    sr_solved = true_problem_sr(i+1,min(loc_mn,sr[i]-'0'),max(loc_mx,sr[i]-'0'),loc_rslt+sr[i]);
    tmp1=sl_solved; tmp2=sr_solved;
    tmp1 = check();
    tmp1_val=min(tmp1_val,tmp2_val);
    int best=tmp1_val; char best_with;
    for(int j=((sl[i]-'0')+1);j<(sr[i]-'0');j++){
      if(best>(max(loc_mx,j)-min(loc_mn,j))){
        best_with=('0'+j);
        best=(max(loc_mx,j)-min(loc_mn,j));
      }
    }
    if(best<tmp1_val){
      while(loc_rslt.size()<sl.size()){
        loc_rslt.push_back(best_with);
      }
      return loc_rslt;
    }
    return tmp1;
}
 
void solve()
{ 
  sl=to_string(l);
  sr=to_string(r);
  srslt.clear();
  if(sr.size()>sl.size()){
    while(srslt.size()<sl.size()){
      srslt.push_back('9');
    }
  }
  else if((sr[0]-'0')-(sl[0]-'0')>1){
    while(srslt.size()<sl.size()){
      srslt.push_back(sl[0]+1);
    }
  }
  else{
    mn=9,mx=0;
    for(int i=0;i<sl.size();i++){
      if(sl[i]==sr[i]){
        srslt.push_back(sl[i]);
        mx=max(mx,sl[i]-'0');
        mn=min(mn,sl[i]-'0');
      }
      else{
        srslt=sub_problem(i,mn,mx,srslt);
        break;
      }
    }
  }
  cout << srslt << endl;
}
 
int main()
{
  FIn;
  // file;
  // t = 1;
  cin >> t;
  while (t--)
  { 
    cin >> l >> r;
    solve();
  }
}