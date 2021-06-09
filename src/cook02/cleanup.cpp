#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
#define mii map<int, int>
#define pq priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18

int c[1001], a[1001], un[1001];

void solve()
{
    int n, u;
    cin >> n >> u;
    for (int i = 0; i < u; i++)
    {
        cin >> un[i];
    }

    sort(un, un + u);

    int j = 0, k = 0, l = 0;
    bool chef = true;
    for (int i = 1; i <= n; i++)
    {
        if (l < u && i == un[l])
        {
            l++;
        }
        else
        {
            if (chef)
            {
                c[j] = i;
                j++;
            }
            else
            {
                a[k] = i;
                k++;
            }
            chef = !chef;
        }
    }

    for (int i = 0; i < j; i++)
    {
        cout << c[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < k; i++)
    {
        cout << a[i] << " ";
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