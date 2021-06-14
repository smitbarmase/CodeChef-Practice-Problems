#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f(i, n) for (int i = 0; i < n; i++)
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define endl "\n";

int tc[101], dc[101];

void solve()
{
    memset(tc, 0, sizeof tc);
    memset(dc, 0, sizeof dc);
    int ntr, ndr, nts, nds, x;
    // check
    cin >> ntr;
    f(i, ntr)
    {
        cin >> x;
        tc[x] = 1;
    }
    cin >> ndr;
    f(i, ndr)
    {
        cin >> x;
        dc[x] = 1;
    }
    cin >> nts;
    // uncheck
    f(i, nts)
    {
        cin >> x;
        if (tc[x] == 0)
            tc[x] = 2;
    }
    cin >> nds;
    f(i, nds)
    {
        cin >> x;
        if (dc[x] == 0)
            dc[x] = 2;
    }
    // validate
    f(i, 101)
    {
        if (tc[i] == 2 || dc[i] == 2)
        {
            cout << "no" << endl;
            return;
        }
    }
    cout << "yes" << endl;
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