#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f(i, n) for (int i = 0; i < n; i++)
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define endl "\n";

int a[100000];
int res[100000];

void solve()
{
    int n;
    cin >> n;
    f(i, n) cin >> a[i];
    int max_cur = 1;
    res[n - 1] = max_cur;
    for (int i = n - 2; i >= 0; i--)
    {
        if ((a[i] < 0 && a[i + 1] > 0) || (a[i] > 0 && a[i + 1] < 0))
        {
            max_cur++;
        }
        else
        {
            max_cur = 1;
        }
        res[i] = max_cur;
    }
    for (int i = 0; i < n; i++)
    {
        cout << res[i] << " ";
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