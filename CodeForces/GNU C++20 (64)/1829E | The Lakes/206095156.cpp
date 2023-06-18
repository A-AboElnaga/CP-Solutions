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

<ext/pb_ds/assoc_container.hpp> // Common file
<ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
namespace __gnu_pbds;
class T> using ordered_set = tree<T, null_type , less<T> , rb_tree_tag , tree_order_statistics_node_update> ;
// find_by_order((int)k) returns iterator of the kth element
// order_of_key((T)key) returns the number of elements less than this key


 file                                                                   \
"output.txt", "w", stdout);                                             \
"input.txt", "r", stdin)

FIn                                                                    \
0);                                                                  \
(0);                                                                 \
::sync_with_stdio(false)

 endl '\n'

int n,m;
int matrix[1005][1005];
bool vis[1005][1005];
int rslt;
 
void pre(){
 
}
 
int dfs(int i,int j){
 
    if(vis[i][j] || i==0 || j==0  || i>n || j>m)return 0;
    vis[i][j]=1;
    return matrix[i][j]+dfs(i-1,j)+dfs(i+1,j)+dfs(i,j-1)+dfs(i,j+1);
}
 
 
void solve(){
    cin >> n >> m;
    rslt=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> matrix[i][j];
            vis[i][j]=0;
            if(matrix[i][j]==0){
                vis[i][j]=1;
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(vis[i][j])continue;
            else{
                rslt=max(rslt,dfs(i,j));
            }
        }
    }
    cout << rslt << endl;
}
 
 
 
int main() {
    FIn;
    //file;
    t = 1;
    cin >> t;
    pre();
    while (t--) {
        solve();
    }
}