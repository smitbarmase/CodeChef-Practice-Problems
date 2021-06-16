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

int a[1000];

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    int count = 0;
    f(j, 0, n)
    {
        int sum = 0;
        f(i, 0, k)
        {
            cin >> a[i];
            sum += a[i];
        }
        int q;
        cin >> q;
        if (sum >= m && q <= 10)
        {
            count++;
        }
    }
    cout << count << endl;
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

    // int t;
    // cin >> t;
    // while (t--)
    // {
    solve();
    //  }
    return 0;
}