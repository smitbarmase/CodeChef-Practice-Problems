#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f(i, n) for (int i = 0; i < n; i++)
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define endl "\n";

string g[1001];
int a[1001][1001];

void solve()
{
    memset(a, 0, sizeof a);
    int n;
    cin >> n;
    f(i, n)
    {
        cin >> g[i];
    }
    for (int j = 0; j < n; j++)
    {
        for (int i = n - 1; i >= 0; i--)
        {
            if (g[i][j] == '.')
            {
                a[i][j] = 1;
            }
            else
            {
                break;
            }
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            if (a[i][j] == 1)
            {
                count++;
            }
            if (g[i][j] == '#')
            {
                break;
            }
        }
    }
    cout << count << endl;
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