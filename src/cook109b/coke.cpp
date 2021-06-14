#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f(i, n) for (int i = 0; i < n; i++)
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define endl "\n"

struct coke
{
    int c, p;
};

int n, m, k, l, r;
coke ck[100];

bool cmp(coke a, coke b)
{
    return a.p < b.p;
}

bool check(int i)
{
    int diff = abs(ck[i].c - k);
    if (diff <= m)
    {
        // temp will be k
        if (l <= k && k <= r)
        {
            return true;
        }
        return false;
    }
    int t;
    if (ck[i].c > k)
    {
        t = ck[i].c - m;
    }
    else
    {
        t = ck[i].c + m;
    }
    // temp will be t
    if (l <= t && t <= r)
    {
        return true;
    }
    return false;
}

void solve()
{
    cin >> n >> m >> k >> l >> r;
    f(i, n) cin >> ck[i].c >> ck[i].p;
    sort(ck, ck + n, cmp);
    f(i, n)
    {
        bool v = check(i);
        if (v)
        {
            cout << ck[i].p << endl;
            return;
        }
    }
    cout << -1 << endl;
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