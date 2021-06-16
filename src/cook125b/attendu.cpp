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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int p = 0;
    f(i, 0, n)
    {
        if (s[i] == '1')
        {
            p++;
        }
    }
    int rem = 120 - n;
    float res = 100 * ((float)(rem + p) / 120);
    if (res >= 75)
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
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