#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f(i, n) for (int i = 0; i < n; i++)
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define endl "\n";

int a[101]; // ignored
int b[101]; // tracked

int unq[101];

int intersection(int m, int k)
{
    int cnt = 0;
    f(i, m)
    {
        f(j, k)
        {
            if (a[i] == b[j])
            {
                cnt++;
            }
        }
    }
    return cnt;
}

int unique(int m, int k, int n)
{
    int cnt = 0;
    memset(unq, 0, sizeof unq);
    f(i, m)
    {
        unq[a[i]] = 1;
    }
    f(j, k)
    {
        unq[b[j]] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        if (!unq[i])
        {
            cnt++;
        }
    }
    return cnt;
}

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    f(i, m) cin >> a[i];
    f(i, k) cin >> b[i];
    cout << intersection(m, k) << " " << unique(m, k, n) << endl;
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