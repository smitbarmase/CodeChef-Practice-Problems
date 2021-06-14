#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f(i, n) for (int i = 0; i < n; i++)
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define endl "\n";

int a[5];

void solve()
{
    int sum = 0;
    f(i, 5)
    {
        cin >> a[i];
        sum += a[i];
    }
    switch (sum)
    {
    case 5:
        cout << "Jeff Dean" << endl;
        break;
    case 4:
        cout << "Hacker" << endl;
        break;
    case 3:
        cout << "Senior Developer" << endl;
        break;
    case 2:
        cout << "Middle Developer" << endl;
        break;
    case 1:
        cout << "Junior Developer" << endl;
        break;
    case 0:
        cout << "Beginner" << endl;
        break;
    default:
        break;
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

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}