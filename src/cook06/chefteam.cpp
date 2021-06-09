#include <bits/stdc++.h>
using namespace std;

#define int unsigned long long
#define f(i, n) for (int i = 0; i < n; i++)
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define endl "\n";

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

void solve()
{
    int n, k;
    cin >> n >> k;

    if (k > n)
    {
        cout << 0 << endl;
        return;
    }
    if (k > n - k)
    {
        k = n - k;
    }
    int c = 1;
    for (int i = 1; i <= k; i++)
    {
        int g = gcd(c, i);
        c /= g;
        c *= (n - i + 1) / (i / g);
    }
    cout << c << endl;
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