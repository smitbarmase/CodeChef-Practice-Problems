#include <bits/stdc++.h>
using namespace std;

#define int long long
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define endl "\n";

int p[10001][2], v[10001];
vector<int> res;

void solve()
{
    int n, m;
    cin >> n >> m;
    res.clear();
    for (int i = 0; i < m; i++)
    {
        cin >> p[i][0] >> p[i][1];
    }
    for (int i = 0; i < n; i++)
    {
        v[i] = 0;
    }
    for (int i = m - 1; i >= 0; i--)
    {
        if (!v[p[i][0]] && !v[p[i][1]])
        {
            res.push_back(i);
            v[p[i][0]] = 1;
            v[p[i][1]] = 1;
        }
    }
    for (int i = res.size() - 1; i >= 0; i--)
    {
        cout << res[i] << " ";
    }
    cout << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

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