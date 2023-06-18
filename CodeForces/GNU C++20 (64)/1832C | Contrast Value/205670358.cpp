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
vector<int> v;
int rslt;
int x;
void pre(){
 
}
 
 
void solve(){
    cin >> n;
    int c=2;
    cin >>arr[1];
    rslt=0;
    for(int i=2;i<=n;i++){
        cin >> x;
        if(arr[c-1]!=x)
            arr[c++]=x;
    }
    n=c-1;
    if(n==1){
        cout <<1 << endl;
        return;
    }
    rslt=1;
    x=arr[1];
   for(int i=2;i<=n-1;i++){
       if((arr[i-1]>arr[i] && arr[i]<arr[i+1]) || (arr[i-1]<arr[i] && arr[i]>arr[i+1])){
           rslt+=1;
           x=arr[i];
       }
   }
   rslt+=1;
 
   if(x==arr[n])rslt-=1;
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