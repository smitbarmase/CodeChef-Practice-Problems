#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f(i, n) for (int i = 0; i < n; i++)
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define endl "\n"
#define cyes cout << "Yes" << endl
#define cno cout << "No" << endl

void solve()
{
    int a[4];
    f(i, 4) cin >> a[i];
    for (int i = 1; i <= 15; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            if ((i >> j) & 1)
            {
                sum += a[j];
            }
        }
        if (sum == 0)
        {
            cyes;
            return;
        }
    }
    cno;
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