#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f(i, n) for (int i = 0; i < n; i++)
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define endl "\n";

int arr[1001];

void solve()
{
    int n;
    cin >> n;
    f(i, n) cin >> arr[i];
    sort(arr, arr + n, greater<int>());
    int i = 0;
    int sum = 0;
    while (i < n)
    {
        int j = 0;
        while (j < 2 && i + j < n)
        {
            sum += arr[i + j];
            j++;
        }
        i += 4;
    }
    cout << sum << endl;
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