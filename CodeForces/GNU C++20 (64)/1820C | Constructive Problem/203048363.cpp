<algorithm>
bits/stdc++.h>
<bitset>
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
namespace std;

 file                                                                   \
"output.txt", "w", stdout);                                             \
"input.txt", "r", stdin)

FIn                                                                    \
0);                                                                  \
(0);                                                                 \
::sync_with_stdio(false)

 endl '\n'
 node_type pair<pair<int/*time*/,int/*security*/>,int/*node*/>




 contin[200015];

int> arr[200015];
int> freq;
int val[200015];
int l,r;
void solve(){
  cin >> n;
  flag=0;
  freq.clear();
  for(int i=0;i<=n;i++){
    contin[i]=1;
    arr[i]={-1,-1};
  }
  for(int i=0;i<n;i++){
    cin >> c;
    val[i]=c;
    freq[c]+=1;
    if(c>=n){
      //more than or equal to n not useful
      flag=1;
continue;
    }
    if(arr[c].first==-1) {arr[c]={i,i};}
    else if((arr[c].second+1)==i){
      arr[c].second=i;
      //appeared more than once
      flag=1;
    }
    else{
      contin[c]=0;
      arr[c].second=i;
      //appeared more than once
      flag=1;
    }
  }
  for(int i=0;i<n;i++){
    if(arr[i].first==-1){
      // the next element exist and can be removed,
      // all elemnts removed,
      //next element does not exist but there is redundancy exist
      if((contin[i+1] && arr[i+1].first!=-1)  || i==0 || (arr[i+1].first==-1 && flag) ){
        cout << "Yes" << endl;
        return;
      }
      else if(arr[i+1].first!=-1){
        l=arr[i+1].first;r=arr[i+1].second;
        for(int j=l;j<=r;j++){
          if(freq[val[j]]>1 || val[j]>=i+1){
            freq[val[j]]-=1;
          }
          else{
            cout <<"No" << endl;
            return;
          }
        }
        cout << "Yes" << endl;
        return;
      }
      else{
        cout << "No" << endl;
        return;
      }
    }
  }
  cout << "No" << endl;
  return;
};
 
int main() {
  FIn;
  // file;
  // t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
}