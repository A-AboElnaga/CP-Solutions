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
int n,w,m;
int l,r,k;
string s;
int prefix[200005];
vector<int> solved[12];
void build_answer(){
    for(int i=0;i<10;i++){
        solved[i].clear();
    }
    int sm=0;
    prefix[0]=0;
    for(int i=1;i<=n;i++){
        sm+=s[i-1]-'0';
        prefix[i]=sm;
    }
    int A;
    for(int i=w;i<=n;i++){
        A=(prefix[i]-prefix[i-w])%9;
        if(solved[A].size()!=2)solved[A].push_back(i-w+1);
    }
}
void answer_q(){
    cin >> l >> r >> k;
    //A*x+B===k (mod 9)
    int A,B;
    int x =(prefix[r]-prefix[l-1])%9;
    int r1=1e9,r2=1e9;
    for(int i=0;i<9;i++){
        if(!solved[i].empty()){
            A=solved[i][0];
        }
        else{
            A=1e9;
            continue;
        }
        B=((k+9)-((i*x)%9))%9;
        if(B==i && solved[i].size()>1){
            B=solved[i][1];
        }
        else if(B==i || solved[B].empty()){B=1e9;}
        else{
            B=solved[B][0];
        }
        if(A==1e9 || B==1e9) ;
        else if(A<r1){
            r1=A,r2=B;
        }
        else if(A==r1){
            r2=min(r2,B);
        }
    }
    if(r1==1e9 || r2==1e9){
        cout << "-1 -1" << endl;
    }
    else{
        cout << r1 << ' ' << r2 << endl;
    }
}
 
void pre();
void solve() {
    cin >> s;
    n=s.size();
    cin >> w >> m;
    build_answer();
    while(m--){
        answer_q();
    }
 
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