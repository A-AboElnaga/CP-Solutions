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
  freopen("output.txt", "w", stdout);                                             \
  freopen("input.txt", "r", stdin)
 
#define FIn                                                                    \
  cin.tie(0);                                                                  \
  cout.tie(0);                                                                 \
  ios_base::sync_with_stdio(false)
 
#define endl '\n'
int tc;
int n;
int arr[2004];
int c_arr[2004];
int best_arr[2004];
int ind[2004];
 
bool comp(){
    for(int i=0;i<n;i++){
        if(c_arr[i]>best_arr[i]) return true;
        else if(c_arr[i]==best_arr[i]) continue;
        else return false;
    }
    return false;
}
 
void pre(){
 
}
void do_lr(int l,int r){
    int j=0;
    for(int i=r+1;i<n;i++){
        c_arr[j++]=arr[i];
    }
    for(int i=r;i>=l;i--){
        c_arr[j++]=arr[i];
    }
    for(int i=0;i<l;i++){
        c_arr[j++]=arr[i];
    }
 
    if(comp()){
        for(int i=0;i<n;i++){
            best_arr[i]=c_arr[i];
        }
    }
}
 
void solve() {
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        ind[arr[i]]=i;
        best_arr[i]=0;
    }
    for(int i=n-1;i>=0;i--){
        best_arr[i]=arr[n-i-1];
    }
    for(int i=0;i<=ind[n];i++){
        do_lr(i,ind[n]);
    }
    for(int i=0;i<=ind[n]-1;i++){
        do_lr(i,ind[n]-1);
    }
    for(int i=0;i<=ind[n-1];i++){
        do_lr(i,ind[n-1]);
    }
    for(int i=0;i<=ind[n-1]-1;i++){
        do_lr(i,ind[n-1]-1);
    }
    for(int i=0;i<n;i++){
        cout << best_arr[i] << ' ';
    }cout << endl;
 
 
}
 
int main() {
    FIn;
    //file;
    tc = 1;
    cin >> tc;
    pre();
    while (tc--) {
        solve();
    }
}