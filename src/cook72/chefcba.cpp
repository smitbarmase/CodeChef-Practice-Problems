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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    bool x = (a * b == c * d);
    bool y = (a * c == b * d);
    bool z = (a * d == b * c);
    if (x || y || z)
    {
        cout << "Possible" << endl;
        return;
    }
    cout << "Impossible" << endl;
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

    solve();
    return 0;
}