#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f(i, n) for (int i = 0; i < n; i++)
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define endl "\n";

int a[26];

void solve()
{
    memset(a, 0, sizeof a);
    int n;
    cin >> n;
    f(i, n)
    {
        string s;
        cin >> s;
        f(j, s.size())
        {
            a[s[j] - 'a'] += 1;
        }
    }
    string t = "codechef";
    int res = 0;
    while (true)
    {
        f(i, t.size())
        {
            if (a[t[i] - 'a'] == 0)
            {
                cout << res << endl;
                return;
            }
            a[t[i] - 'a'] -= 1;
        }
        res++;
    }
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