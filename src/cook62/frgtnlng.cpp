#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f(i, n) for (int i = 0; i < n; i++)
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define endl "\n";

vector<string> w;
unordered_set<string> s;

void solve()
{
    w.clear();
    s.clear();
    int n, k;
    cin >> n >> k;
    f(i, n)
    {
        string t;
        cin >> t;
        w.push_back(t);
    }
    f(i, k)
    {
        int l;
        cin >> l;
        f(j, l)
        {
            string t;
            cin >> t;
            s.insert(t);
        }
    }
    f(i, n)
    {
        if (s.find(w[i]) == s.end())
        {
            cout << "NO ";
        }
        else
        {
            cout << "YES ";
        }
    }
    cout << endl;
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