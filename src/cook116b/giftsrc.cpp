#include <bits/stdc++.h>
using namespace std;

#define int long long
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
    string s;
    cin >> s;
    int x = 0, y = 0;
    char last = ' ';
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'L')
        {
            if (last != 'x')
            {
                x--;
                last = 'x';
            }
        }
        else if (s[i] == 'R')
        {
            if (last != 'x')
            {
                x++;
                last = 'x';
            }
        }
        else if (s[i] == 'U')
        {
            if (last != 'y')
            {
                y++;
                last = 'y';
            }
        }
        else
        {
            if (last != 'y')
            {
                y--;
                last = 'y';
            }
        }
    }
    cout << x << " " << y << endl;
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