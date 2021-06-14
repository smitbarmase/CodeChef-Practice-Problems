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
    int a, b, n;
    cin >> a >> b >> n;
    if (a == b || n == 0)
    {
        cout << 0 << endl;
        return;
    }
    if (n % 2 != 0)
    {

        if ((a < 0 && b >= 0) || (a >= 0 && b < 0))
        {
            if (a < 0)
            {
                cout << 2 << endl;
                return;
            }
            cout << 1 << endl;
        }
    }
    a = abs(a);
    b = abs(b);
    if (a < b)
    {
        cout << 2 << endl;
        return;
    }
    cout << 1 << endl;
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