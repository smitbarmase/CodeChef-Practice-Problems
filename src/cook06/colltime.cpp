#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f(i, n) for (int i = 0; i < n; i++)
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define endl "\n";

const int N = 50000;
const int D = 21;
const int LCM = 5342931457063200LL;

pair<int, int> arr[N];

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void solve()
{
    int n;
    cin >> n;
    f(i, n)
    {
        int x, v;
        cin >> x >> v;
        arr[i] = {x, v};
    }
    sort(arr, arr + n);
    int num[2 * D] = {0};
    int sum[2 * D] = {0};
    int ans[2 * D] = {0};
    f(i, n)
    {
        int x = arr[i].first;
        int v = arr[i].second;
        for (int d = 1; v + d <= 20; d++)
        {
            ans[d] += x * num[D + v + d] - sum[D + v + d];
        }
        num[D + v]++;
        sum[D + v] += x;
    }
    int integral = 0;
    int numerator = 0;
    int denominator = LCM;
    for (int d = 1; d <= 40; d++)
    {
        int rem = ans[d] % d;
        numerator += (LCM / d) * rem;
        integral += ans[d] / d;
    }
    integral += numerator / denominator;
    numerator %= denominator;
    if (numerator == 0)
    {
        cout << integral << endl;
        return;
    }
    int g = gcd(numerator, denominator);
    numerator /= g;
    denominator /= g;
    if (integral)
    {
        cout << integral << " " << numerator << "/" << denominator << endl;
        return;
    }
    cout << numerator << "/" << denominator << endl;
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