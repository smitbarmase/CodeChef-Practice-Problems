#include <bits/stdc++.h>
using namespace std;

// #define int long long
#define f(i, n) for (int i = 0; i < n; i++)
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    int per = 5 * (ceil((float)n / 250000) - 1);
    int sum = 0;
    while (per)
    {
        sum += n * per / 100;
        per--;
    }
    cout << n - sum << endl;
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