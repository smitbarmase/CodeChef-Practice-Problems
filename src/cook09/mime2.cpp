#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f(i, a, n) for (int i = a; i < n; i++)
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define endl '\n'

int gcd(int a, int b)
{
    if (!b)
        return a;
    return gcd(b, a % b);
}
int lcm(int a, int b) { return (a * b) / gcd(a, b); }

void solve()
{
    int n, m;
    cin >> n >> m;
    unordered_map<string, string> s;
    f(i, 0, n)
    {
        string a, b;
        cin >> a >> b;
        s.insert({a, b});
    }
    f(i, 0, m)
    {
        string f;
        cin >> f;
        string ex = "";
        for (int i = f.size() - 1; f[i] != '.' && i >= 0; i--)
        {
            ex = f[i] + ex;
        }
        if (ex == f)
        {
            ex = "";
        }
        auto it = s.find(ex);
        if (it == s.end())
        {
            cout << "unknown" << endl;
            continue;
        }
        cout << it->second << endl;
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

    solve();
    return 0;
}