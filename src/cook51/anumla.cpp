#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f(i, n) for (int i = 0; i < n; i++)
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define endl "\n";

#define N 16

int arr[1 << N], sum[1 << N];
int res[N];

void solve()
{
    int n;
    cin >> n;
    int m = 1 << n;
    f(i, m) cin >> arr[i];
    sort(arr, arr + m);
    multiset<int> s;
    int pos = 0, spos = 0;
    for (int i = 1; i < m; i++)
    {
        int expected = -1;
        if (!s.empty())
        {
            expected = *s.begin();
        }
        if (arr[i] != expected)
        {
            // new element found
            res[pos] = arr[i];
            int temp = spos;
            for (int j = 0; j < temp; j++)
            {
                sum[spos] = sum[j] + res[pos];
                s.insert(sum[spos]);
                spos++;
            }
            sum[spos++] = res[pos];
            pos++;
        }
        else
        {
            // it was expected sum
            s.erase(s.begin());
        }
    }
    for (int i = 0; i < pos; i++)
    {
        cout << res[i] << " ";
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