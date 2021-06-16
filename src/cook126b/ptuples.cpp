#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f(i, a, n) for (int i = a; i < n; i++)
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define endl '\n'

int gcd(int a, int b)
{
    if (!b)
        return a;
    return gcd(b, a % b);
}
int lcm(int a, int b) { return (a * b) / gcd(a, b); }

int a[1000005];
int res[1000005];

void build()
{
    a[0] = a[1] = 1;
    for (int j = 2; j <= 1000000; j++)
    {
        if (!a[j])
        {
            for (int i = 2 * j; i <= 1000000; i += j)
            {
                a[i] = 1;
            }
        }
    }
    res[0] = res[1] = 0;
    for (int i = 2; i <= 1000000; i++)
    {
        res[i] = res[i - 1];
        if (!a[i] && !a[i - 2])
        {
            res[i]++;
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    cout << res[n] << endl;
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
    build();
    while (t--)
    {
        solve();
    }
    return 0;
}