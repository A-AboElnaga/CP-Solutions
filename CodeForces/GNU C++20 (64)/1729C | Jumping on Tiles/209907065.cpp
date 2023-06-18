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
string s;
vector<int> rslt;
vector<int> arr[26];
 
int n;
void pre();
void solve() {
    cin >> s; n=s.size();
    for(auto & i : arr){
        i.clear();
    }
    for(int i=1;i<n-1;i++){
        arr[s[i]-'a'].push_back(i+1);
    }
 
    int start= s[0]-'a', end=s[n-1]-'a';
    bool rev=0;
    if(end<start){swap(start,end); rev=1;}
    rslt.clear();
    cout << end-start << ' ';
    for(int i=start;i<=end;i++){
        for(auto el:arr[i]){
            rslt.push_back(el);
        }
    }
    cout << rslt.size()+2 << endl;
    if(rev) std::reverse(rslt.begin(), rslt.end());
    cout << 1 << ' ';
    for(auto el:rslt){
        cout << el << ' ';
    }cout << n << endl;
 
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