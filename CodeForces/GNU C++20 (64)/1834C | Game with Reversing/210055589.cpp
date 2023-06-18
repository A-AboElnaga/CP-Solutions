#include <bits/stdc++.h>
 
using namespace std;
 
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
using namespace __gnu_pbds;
template<class T> using ordered_set = tree<T, null_type , less<T> , rb_tree_tag , tree_order_statistics_node_update> ;
// find_by_order((int)k) returns iterator of the kth element
// order_of_key((T)key) returns the number of elements less than this key
 
#define ll long long
#define file                                                                   \
  freopen("input.txt", "r", stdin);\
  freopen("output.txt", "w", stdout)
 
#define FIn                                                                    \
  cin.tie(0);                                                                  \
  cout.tie(0);                                                                 \
  ios_base::sync_with_stdio(false)
 
#define endl '\n'
 
const int mod=1e9+7;
int tc;
int n;
string s,t;
 
void pre();
void solve() {
    cin >> n;
    cin >> s >> t;
    int min_rep=0;
    int x1=0;
    for(int i=0;i<n;i++){
        if(s[i]!=t[i])min_rep+=1;
        if(s[i]!=t[n-i-1])x1+=1;
    }
    int dirc=0;
    if(min_rep<x1){
        dirc=1;
    }
    else if(min_rep==x1){
        dirc=0;
    }
    else{
        dirc=-1;
    }
    min_rep=min(min_rep,x1);
 
    if(min_rep==0){
        if(dirc>=0){
            cout << 0 << endl;
            return;
        }
        else{
            min_rep=1;
        }
    }
    if(dirc==0){
        cout << min_rep+min_rep-1;
    }
    else if(dirc==1){
        cout << min_rep+min_rep-(min_rep%2);
    }
    else{
        cout << min_rep+min_rep-(1-min_rep%2);
    }cout << endl;
 
 
}
int main() {
    FIn;
//    file;
//    freopen("key.in", "r", stdin);
//    freopen("key.out", "w", stdout);
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
long long inv(long long i) {
    return i <= 1 ? i : mod - (long long)(mod/i) * inv(mod % i) % mod;
}