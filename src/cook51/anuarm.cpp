#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f(i, n) for (int i = 0; i < n; i++)
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define endl "\n";

int ma[100001];
int na[100001];

void solve()
{
    memset(na, 0, sizeof na);
    int n, m;
    cin >> n >> m;
    f(i, m) cin >> ma[i];
    int min_m = m, max_m = -1;
    for (int i = 0; i < m; i++)
    {
        min_m = min(min_m, ma[i]);
        max_m = max(max_m, ma[i]);
    }
    int pos = min_m;
    for (int i = pos + 1; i < n; i++)
    {
        na[i] = max(na[i], i - pos);
    }
    for (int i = pos - 1; i >= 0; i--)
    {
        na[i] = max(na[i], pos - i);
    }
    if (m > 1)
    {
        int pos = max_m;
        for (int i = pos + 1; i < n; i++)
        {
            na[i] = max(na[i], i - pos);
        }
        for (int i = pos - 1; i >= 0; i--)
        {
            na[i] = max(na[i], pos - i);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << na[i] << " ";
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