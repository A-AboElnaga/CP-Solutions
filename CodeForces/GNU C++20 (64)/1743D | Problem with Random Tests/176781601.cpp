#include<bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
 
#define ll long long
#define endl '\n'
#define F first
#define S second
using namespace std;
using namespace __gnu_pbds;
 
template<typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int N = 2e5 + 7, mod = 1e9 + 7;
void doWork() {
    int n;
    string s;
    cin >> n >> s;
    reverse(s.begin(),  s.end());
    while (s.back() == '0' && s.size()>1)
        s.pop_back();
    if ( s.size() == 1)
        cout << s << endl;
    else
    {
        reverse(s.begin(),  s.end());
        int reqLength = s.size();
        vector<int> z;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '0')
            {
                z.push_back(i);
            }
            if( z.empty())
                reqLength--;
        }
        if ( z.empty())
            cout << s << endl;
        else
        {
            vector<int> already,tmp;
            for (int i = 0; i < s.size(); ++i) {
                if (s[i] == '1' && (i+reqLength < s.size()))
                    already.push_back(i);
            }
            reverse(z.begin(),  z.end());
            int f= z.back();
            z.pop_back();
            string ans = s;
            ans[f] = '1';
            while (z.empty() == 0)
            {
                int pos = z.back();
                z.pop_back();
                for(auto it : already)
                {
                  if( s[it+pos-f] == '1')
                  {
                    tmp.push_back(it);
                  }
                }
                if ((int) tmp.size())
                {
                    already.clear();
                    already = tmp;
                    tmp.clear();
                    ans[pos] = '1';
                }
            }
            cout << ans;
        }
    }
}
 
 
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int tests = 1;
  //  cin >> tests;
    for (int i = 0; i < tests; ++i) {
        //cout << "Case #" << i+1 <<": ";
        doWork();
        //        if (i + 1 == tests)
        //            continue;
        //        cout << endl;
    }
}