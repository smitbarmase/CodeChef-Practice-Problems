#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f(i, n) for (int i = 0; i < n; i++)
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define endl "\n";

int t[10];
int d[10];

void solve()
{
    int n, k;
    cin >> n >> k;
    int sum = 0;
    int idx = -1;
    f(i, n)
    {
        cin >> t[i] >> d[i];
        if (k > sum)
        {
            sum += t[i];
            idx = i;
        }
    }
    int ans = 0;
    if (idx != -1)
    {
        int rem = sum - k;
        ans = rem * d[idx];
    }
    for (int i = idx + 1; i < n; i++)
    {
        ans += d[i] * t[i];
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