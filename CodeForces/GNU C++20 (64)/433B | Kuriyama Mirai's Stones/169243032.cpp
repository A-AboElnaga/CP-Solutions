#include <bits/stdc++.h>
using namespace std;
#define int unsigned long long int
#define endl "\n"
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
 
int pref1[1000000];
int pref2[1000000];
int32_t main(void)
{
    fastio;
    int n;
    cin >> n;
    int ara[n];
 
    pref1[0] = pref2[0] = 0;
    for(int i = 1 ; i <= n ; i++)
    {
        cin >> ara[i];
        pref1[i] = pref1[i - 1] + ara[i];
    }
    sort(ara + 1 , ara + n + 1 );
 
    for(int i = 1; i <= n ; i++)
    {
        pref2[i] = pref2[i - 1] + ara[i];
    }
    int q;
    cin >> q;
    while(q--)
    {
        int p, l, r;
        cin >> p >> l >> r;
        if(p == 1)
        {
            cout << pref1[r] - pref1[l - 1] << endl;
        }
        else
            cout << pref2[r] - pref2[l - 1] << endl;
 
    }
    return 0;
}