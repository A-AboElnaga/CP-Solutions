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
int n,m,x,y;
char cc;
int arr[10004];
int solved[1001][1001][2];
void pre();
int dowork(int index,int width, int color){
    if(index==m){
        if(width<x) return 1e9;
        return 0;
    }
    int &ret=solved[index][width][color];
    if(ret!=-1)  return ret;
    ret = 1e9;
    if(width!=0 && width<x){
        if(color==0){
            ret = min(ret,arr[index] + dowork(index+1,width+1,color));
        }
        else{
            ret= min(ret,n-arr[index] + dowork(index+1,width+1,color));
        }
    }
    else if(width==y){
        if(color==0){
            ret = min(ret,n-arr[index] + dowork(index+1,1,1));
        }
        else{
            ret= min(ret,arr[index] + dowork(index+1,1,0));
        }
    }
    else{
        if(color==0){
            ret=min(arr[index]+ dowork(index+1,width+1,0),
                    n-arr[index]+ dowork(index+1,1,1));
        }
        else{
            ret=min(arr[index]+ dowork(index+1,1,0),
                    n-arr[index]+ dowork(index+1,width+1,1));
        }
    }
    return ret;
}
void solve() {
    cin >> n >> m >> x >>y;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> cc;
            if(cc=='#'){
                arr[j]++;
            }
        }
    }
    for(int i=0;i<=m;i++){
        for(int j=0;j<=y;j++){
            for(int k=0;k<2;k++){
                solved[i][j][k]=-1;
            }
        }
    }
    cout << dowork(0,0,0);
}
int main() {
    FIn;
//    file;
//    freopen("key.in", "r", stdin);
//    freopen("key.out", "w", stdout);
    tc = 1;
    //cin >> tc;
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