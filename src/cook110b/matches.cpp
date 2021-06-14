#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f(i, n) for (int i = 0; i < n; i++)
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define endl "\n"

int dic[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

void solve()
{
    int a, b;
    cin >> a >> b;
    int res = a + b;
    int cnt = 0;
    while (res)
    {
        int rem = res % 10;
        res /= 10;
        cnt += dic[rem];
    }
    cout << cnt << endl;
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