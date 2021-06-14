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
    int up = 0, down = 0;
    int cont_1 = 0, cont_2;
    f(i, s.size())
    {
        if (s[i] == 'D')
        {
            cont_2 = 0;
            if (!cont_1)
            {
                cont_1 = 1;
                up++;
            }
        }
        else
        {
            cont_1 = 0;
            if (!cont_2)
            {
                cont_2 = 1;
                down++;
            }
        }
    }
    cout << min(up, down) << endl;
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