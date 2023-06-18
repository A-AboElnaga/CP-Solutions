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
int t,q;
string s[3];
int global_timer;
int global_block;
int global_block_time;
int case_type;
vector<int> block_till;
map<int/* index different_char*/,int/*blocked at*/> block;
void pre()
{
 
}
void case_1(){
    int i;cin >> i;
    if(s[1][i-1]==s[2][i-1])return;
    block[i]=global_timer+t;
    block_till.emplace_back(block[i]);
}
void case_2(){
    int i1,pos1,i2,pos2;
    cin >> i1 >> pos1 >> i2 >> pos2;
    if(s[i1][pos1-1]==s[i2][pos2-1])return;
 
    block.erase(pos1);
    block.erase(pos2);
    swap(s[i1][pos1-1],s[i2][pos2-1]);
    int c=1;
    if(i1==1)c=2;
    if(s[i1][pos1-1]!=s[c][pos1-1])block[pos1]=0;
    c=1;
 
    if(i2==1)c=2;
    if(s[i2][pos2-1]!=s[c][pos2-1])block[pos2]=0;
 
 
}
void case_3(){
    int blocked_total = block_till.size()- (upper_bound(block_till.begin(), block_till.end(),global_timer)-block_till.begin());
    if(blocked_total>=block.size())cout << "Yes" << endl;
    else cout << "No" << endl;
}
 
void solve(){
    block.clear();
    block_till.clear();
    cin >> s[1] >> s[2];
    for(int i=0;i<s[1].size();i++){
        if(s[1][i]==s[2][i])continue;
        else{
            block[i+1]=0;
        }
    }
    global_timer=0;
    cin >> t >> q;
    while(q--){
        global_timer+=1;
        cin >> case_type;
        switch (case_type) {
            case(1):
                case_1();
                break;
            case(2):
                case_2();
                break;
            case(3):
                case_3();
                break;
            default:
                break;
        }
    }
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