#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f(i, n) for (int i = 0; i < n; i++)
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define endl "\n";

int dist(pair<int, int> a, pair<int, int> b)
{
    int x = (a.first - b.first);
    int y = (a.second - b.second);
    return (x * x) + (y * y);
}

void solve()
{
    int r;
    cin >> r;
    pair<int, int> a, b, c;
    cin >> a.first >> a.second;
    cin >> b.first >> b.second;
    cin >> c.first >> c.second;
    int sq = r * r;
    bool x = dist(a, b) <= sq;
    bool y = dist(b, c) <= sq;
    bool z = dist(c, a) <= sq;
    if ((x && y) || (y && z) || (z && x))
    {
        cout << "yes" << endl;
        return;
    }
    cout << "no" << endl;
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