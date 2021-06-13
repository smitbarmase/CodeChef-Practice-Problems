#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f(i, n) for (int i = 0; i < n; i++)
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define endl "\n";

int l[100], r[100];

void solve()
{
    int n;
    cin >> n;
    f(i, n) cin >> l[i];
    f(i, n) cin >> r[i];
    int pmax = 0;
    int rmax = 0;
    int ans = 0;
    f(i, n)
    {
        int p = l[i] * r[i];
        if (p > pmax)
        {
            pmax = p;
            rmax = r[i];
            ans = i;
        }
        else if (p == pmax)
        {
            if (r[i] > rmax)
            {
                rmax = r[i];
                ans = i;
            }
        }
    }
    cout << ans + 1 << endl;
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