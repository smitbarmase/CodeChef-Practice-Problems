#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f(i, n) for (int i = 0; i < n; i++)
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define endl "\n";

int a[1000001];

void solve()
{
    int n;
    cin >> n;
    f(i, n) cin >> a[i];
    int m = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] <= a[i + 1])
        {
            // no swapping
            m = 0;
        }
        else
        {
            if (m == 1)
            {
                cout << "NO" << endl;
                return;
            }
            // swapping
            swap(a[i], a[i + 1]);
            m = 1;
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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