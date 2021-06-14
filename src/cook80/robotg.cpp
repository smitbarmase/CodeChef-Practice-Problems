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
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    pair<int, int> h, v, curr;
    h = v = curr = {0, 0};
    for (auto c : s)
    {
        if (c == 'U')
        {
            curr.second += 1;
            v.first = max(v.first, curr.second);
        }
        else if (c == 'D')
        {
            curr.second -= 1;
            v.second = min(v.second, curr.second);
        }
        else if (c == 'L')
        {
            curr.first -= 1;
            h.first = min(h.first, curr.first);
        }
        else
        {
            curr.first += 1;
            h.second = max(h.second, curr.first);
        }
    }
    int diff_w = h.second - h.first + 1;
    int diff_h = v.first - v.second + 1;
    if (n >= diff_h && m >= diff_w)
    {
        cout << "safe" << endl;
        return;
    }
    cout << "unsafe" << endl;
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