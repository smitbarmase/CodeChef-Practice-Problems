#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f(i, n) for (int i = 0; i < n; i++)
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define endl "\n";

void solve()
{
    string v;
    cin >> v;
    int max_len = 0, len = 0;
    for (char c : v)
    {
        if (c == '(')
        {
            len++;
        }
        else if (c == ')')
        {
            len--;
        }
        max_len = max(max_len, len);
    }
    for (int i = 0; i < max_len; i++)
    {
        cout << "(";
    }
    for (int i = 0; i < max_len; i++)
    {
        cout << ")";
    }
    cout << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}