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
string s,rslt,tmp;
int x;
void pre();
void solve() {
    cin >> n;
    cin >> s;
//    reverse(s.begin(), s.end());
    rslt="";
    tmp="";
    while(!s.empty()){
        if(*s.rbegin()=='0'){
            s.pop_back();
            tmp+=*s.rbegin(); s.pop_back();
            tmp+=*s.rbegin(); s.pop_back();
 
        }
        else{
            tmp+=*s.rbegin(); s.pop_back();
        }
        reverse(tmp.begin(), tmp.end());
        x=stoi(tmp)-1;
        rslt+='a'+x;
        tmp.clear();
 
    }
    reverse(rslt.begin(), rslt.end());
    cout << rslt << endl;
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