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
    int a, b;
    cin >> a >> b;
    int i = 1;
    while (true)
    {
        if (i % 2 == 0)
        {
            b -= i;
        }
        else
        {
            a -= i;
        }
        if (a < 0)
        {
            cout << "Bob" << endl;
            break;
        }
        if (b < 0)
        {
            cout << "Limak" << endl;
            break;
        }
        i++;
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