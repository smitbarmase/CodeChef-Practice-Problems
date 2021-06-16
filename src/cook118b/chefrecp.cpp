#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f(i, n) for (int i = 0; i < n; i++)
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define endl "\n"

int a[1000];
int c[1001];
int fq[1001];
int fqcount[1001];

void solve()
{
    memset(fq, 0, sizeof fq);
    memset(c, 0, sizeof c);
    memset(fqcount, 0, sizeof fqcount);
    int n;
    cin >> n;
    f(i, n)
    {
        cin >> a[i];
        fq[a[i]] += 1;
    }
    for (int i = 1; i < n; i++)
    {
        if (c[a[i]])
        {
            cout << "NO" << endl;
            return;
        }
        if (a[i] != a[i - 1] && !c[a[i - 1]])
        {
            c[a[i - 1]] = 1;
        }
    }
    f(i, 1001)
    {
        if (fq[i] > 0)
            fqcount[fq[i]] += 1;
    }
    f(i, 1001)
    {
        if (fqcount[i] > 1)
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