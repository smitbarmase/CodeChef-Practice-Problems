#include <bits/stdc++.h>
using namespace std;

#define int long long
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
    int n, a, b;
    cin >> n >> a >> b;
    int x = setbits(a);
    int y = setbits(b);
    int mask = ~(-1 << n);
    int shift = n - (x + y);
    if (x + y <= n)
    {
        cout << ((-1 << shift) & mask) << endl;
        return;
    }
    cout << ((-1 << -shift) & mask) << endl;
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