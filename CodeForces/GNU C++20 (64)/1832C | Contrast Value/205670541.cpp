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

int n;
int arr[300005];
int rslt,x;
int state;//dec,const,inc
 
void pre(){
 
}
 
 
void solve(){
    cin >> n;
    rslt=0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
 
    rslt=1;
    x=arr[0];
    state=0;
    for(int i=0;i<n;i++){
        if(i==n-1){
            if(state!=0){
                rslt+=1;
            }
            break;
        }
        if(state==0){
            if(arr[i]<arr[i+1]){
                state=1;
            }
            else if(arr[i]>arr[i+1]){
                state=-1;
            }
        }
        else{
            if(state==1){
                if(arr[i] > arr[i+1]){
                    rslt+=1;
                    state*=-1;
                }
            }
            else{
                if(arr[i] < arr[i+1]){
                    rslt+=1;
                    state*=-1;
                }
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