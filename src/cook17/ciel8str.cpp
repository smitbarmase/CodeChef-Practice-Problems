#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f(i, n) for (int i = 0; i < n; i++)
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define endl "\n";

void solve()
{
    string s;
    cin >> s;
    int l = s.size();
    int res = 0;
    // 1 digit
    for (int i = 0; i < l; i++)
    {
        int k = s[i] - '0';
        if (k % 8 == 0)
        {
            res += 1;
        }
    }

    // 2 digit
    for (int i = 1; i < l; i++)
    {
        if (s[i - 1] == '0')
            continue;
        int k = 10 * (s[i - 1] - '0') + (s[i] - '0');
        if (k % 8 == 0)
        {
            res += 1;
        }
    }

    // 3 digit
    int nonzero = 0;
    for (int i = 2; i < l; i++)
    {
        if (s[i - 2] != '0')
        {
            nonzero++;
        }
        int k = 100 * (s[i - 2] - '0') + 10 * (s[i - 1] - '0') + (s[i] - '0');
        if (k % 8 == 0)
        {
            res += nonzero;
        }
    }
    cout << res << endl;
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

    solve();
    return 0;
}