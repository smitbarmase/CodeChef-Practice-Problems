#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f(i, n) for (int i = 0; i < n; i++)
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define endl "\n";

int a[1000];

void solve()
{
    int n;
    cin >> n;
    f(i, n) cin >> a[i];
    sort(a, a + n, greater<int>());
    int idx = 0;
    int l[2] = {-1, -1};
    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
        {
            l[idx] = a[i];
            idx++;
            i++;
            if (idx == 2)
            {
                break;
            }
        }
    }
    int ans = l[0] * l[1];
    if (ans < 0)
    {
        cout << -1 << endl;
        return;
    }
    cout << ans << endl;
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