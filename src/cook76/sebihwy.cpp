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
    int s, sg, fg, d, t;
    cin >> s >> sg >> fg >> d >> t;
    int vt = ((s * t) + (d * 180));
    int a = abs((sg * t) - vt);
    int b = abs((fg * t) - vt);
    if (a < b)
    {
        cout << "SEBI" << endl;
    }
    else if (a > b)
    {
        cout << "FATHER" << endl;
    }
    else
    {
        cout << "DRAW" << endl;
    }
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