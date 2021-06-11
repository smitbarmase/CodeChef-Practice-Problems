#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f(i, n) for (int i = 0; i < n; i++)
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define endl "\n";

int n;
string s;

string arrage(int i, int j)
{
    if (i == j)
    {
        return s;
    }
    else if (i < j)
    {
        string t = s;
        rotate(t.begin() + i, t.begin() + j, t.begin() + j + 1);
        return t;
    }
    else
    {
        string t = s;
        rotate(t.begin() + j, t.begin() + j + 1, t.begin() + i + 1);
        return t;
    }
}

void solve()
{
    cin >> n;
    cin >> s;
    string lexo = s;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            string t = arrage(i, j);
            if (t < lexo)
            {
                lexo = t;
            }
        }
    }
    cout << lexo << endl;
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
    getchar();
    while (t--)
    {
        solve();
    }
    return 0;
}