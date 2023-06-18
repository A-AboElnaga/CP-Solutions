#include <algorithm>
#include <bits/stdc++.h>
#include <bitset>
#include <cmath>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_set>
#include <utility>
#include <valarray>
#include <vector>
using namespace std;
 
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
using namespace __gnu_pbds;
template<class T> using ordered_set = tree<T, null_type , less<T> , rb_tree_tag , tree_order_statistics_node_update> ;
// find_by_order((int)k) returns iterator of the kth element
// order_of_key((T)key) returns the number of elements less than this key
 
 
#define file                                                                   \
  freopen("input.txt", "r", stdin);\
  freopen("output.txt", "w", stdout)
 
#define FIn                                                                    \
  cin.tie(0);                                                                  \
  cout.tie(0);                                                                 \
  ios_base::sync_with_stdio(false)
 
#define endl '\n'
 
 
 
int tc;
int n;
string s;
int mx_char[200005],x;
int val[5]={1,10,100,1000,10000};
int org_sum;
int current[5];
int prefix[200005][5];
int appear[5];
int last_appear[200005][5];
int rslt;
 
void pre();
 
void remove(int pos, int& cur_sum){
    int letter = s[pos]-'A';
    if(pos==n-1 ||letter>mx_char[pos+1]){
        cur_sum-=val[letter];
        int l;
        if(pos==0) return;
        for(int let=letter;let>((pos!=n-1)?mx_char[pos+1]:0);let--){
            l=last_appear[pos][let];
            cur_sum+=2 * (prefix[pos - 1][let-1]-((l==-1)?0:prefix[l][let-1])) * val[let-1];
        }
    }
    else if(letter<mx_char[pos+1]){
        cur_sum+=val[letter];
    }
    else if (letter==mx_char[pos+1]){
        cur_sum-=val[letter];
    }
 
}
void add(int pos,int& base_sum){
    int cp_sum;
    int letter;
    for(int i=0;i<5;i++){
        letter=i;
        cp_sum=base_sum;
        if(pos==n-1 ||letter>mx_char[pos+1]){
            cp_sum+=val[letter];
            int l;
            if(pos!=0)
                for(int let=letter;let>((pos!=n-1)?mx_char[pos+1]:0);let--){
                    l=last_appear[pos][let];
                    cp_sum-=2 * (prefix[pos - 1][let-1]-((l==-1)?0:prefix[l][let-1])) * val[let-1];
                }
        }
        else if(letter<mx_char[pos+1]){
            cp_sum-=val[letter];
        }
        else if (letter==mx_char[pos+1]){
            cp_sum+=val[letter];
        }
 
        rslt=max(rslt,cp_sum);
    }
 
}
 
void best_of(int pos){
    int tmp;
    tmp=org_sum;
    remove(pos,tmp);
    add(pos, tmp);
}
 
void solve() {
    cin >> s;
    n=s.size();
    //init sum
    x=org_sum=0;
    for(int i=n-1;i>=0;i--){
        if(s[i]-'A'>=x){
            org_sum+=val[s[i]-'A'];
            x=max(x,s[i]-'A');
        }
        else{
            org_sum-=val[s[i]-'A'];
        }
        mx_char[i]=x;
    }
    memset(current,0,sizeof(current));
    for(int i=0;i<5;i++){
        appear[i]=-1;
    }
    for(int i=0;i<n;i++){
        current[s[i]-'A']+=1;
        for(int j=0;j<5;j++){
            prefix[i][j]=current[j];
            last_appear[i][j]=appear[j];
        }
        appear[s[i]-'A']=i;
    }
//    cout << org_sum << endl;
 
    rslt=org_sum;
    for(int i=0;i<n;i++){
        best_of(i);
    }
    cout << rslt << endl;
}
 
int main() {
    FIn;
    //file;
    //freopen("input.in", "r", stdin);
    tc = 1;
    cin >> tc;
    pre();
    for(int i=1;i<=tc;i++){
        //cout << "Case " << i <<": ";
        solve();
    }
}
 
void pre(){
}