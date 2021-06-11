#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f(i, n) for (int i = 0; i < n; i++)
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define endl "\n";

int a[51];
int fr[101];

void solve()
{
    memset(fr, 0, sizeof fr);
    int n;
    cin >> n;
    int saved = 0;
    f(i, n)
    {
        cin >> a[i];
        if (!fr[a[i]])
        {
            fr[a[i]] = 1;
            saved++;
        }
    }
    cout << saved << endl;
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