#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f(i, n) for (int i = 0; i < n; i++)
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define endl "\n";

int a[100];
int b[100];

void solve()
{
    int n;
    cin >> n;
    int max_a = -1, max_b = -1;
    int sum_a = 0, sum_b = 0;
    f(i, n)
    {
        cin >> a[i];
        sum_a += a[i];
        if (a[i] > max_a)
        {
            max_a = a[i];
        }
    }
    f(i, n)
    {
        cin >> b[i];
        sum_b += b[i];
        if (b[i] > max_b)
        {
            max_b = b[i];
        }
    }
    sum_a -= max_a;
    sum_b -= max_b;
    if (sum_a == sum_b)
    {
        cout << "Draw" << endl;
        return;
    }
    if (sum_a > sum_b)
    {
        cout << "Bob" << endl;
        return;
    }
    cout << "Alice" << endl;
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