#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f(i, n) for (int i = 0; i < n; i++)
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define endl "\n"

int m[10][10];

void solve()
{
    int r, c;
    cin >> r >> c;
    f(i, r)
    {
        f(j, c)
        {
            cin >> m[i][j];
        }
    }
    // corners
    if (m[0][0] >= 2 || m[0][c - 1] >= 2 || m[r - 1][0] >= 2 || m[r - 1][c - 1] >= 2)
    {
        cout << "Unstable" << endl;
        return;
    }
    // edges
    for (int i = 1; i < c - 1; i++)
    {
        if (m[0][i] >= 3)
        {
            cout << "Unstable" << endl;
            return;
        }
    }
    for (int i = 1; i < c - 1; i++)
    {
        if (m[r - 1][i] >= 3)
        {
            cout << "Unstable" << endl;
            return;
        }
    }
    for (int i = 1; i < r - 1; i++)
    {
        if (m[i][0] >= 3)
        {
            cout << "Unstable" << endl;
            return;
        }
    }
    for (int i = 1; i < r - 1; i++)
    {
        if (m[i][c - 1] >= 3)
        {
            cout << "Unstable" << endl;
            return;
        }
    }
    // everything in-between
    for (int i = 1; i < r - 1; i++)
    {
        for (int j = 1; j < c - 1; j++)
        {

            if (m[i][j] >= 4)
            {
                cout << "Unstable" << endl;
                return;
            }
        }
    }
    // passed on damn!
    cout << "Stable" << endl;
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