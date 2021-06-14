#include <bits/stdc++.h>
using namespace std;

// #define int long long
#define f(i, n) for (int i = 0; i < n; i++)
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define endl "\n";

void solve()
{
    int x1, x2, x3, v1, v2;
    cin >> x1 >> x2 >> x3 >> v1 >> v2;
    float t1 = (float)abs(x3 - x1) / v1;
    float t2 = (float)abs(x3 - x2) / v2;
    if (t1 == t2)
    {
        cout << "Draw" << endl;
        return;
    }
    if (t1 < t2)
    {
        cout << "Chef" << endl;
        return;
    }
    cout << "Kefa" << endl;
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