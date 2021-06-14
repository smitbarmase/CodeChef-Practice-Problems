#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f(i, n) for (int i = 0; i < n; i++)
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define endl "\n";

int psum[31];

void solve()
{
    memset(psum, 0, sizeof psum);
    int d, q;
    cin >> d;
    f(i, d)
    {
        int di, pi;
        cin >> di >> pi;
        psum[di - 1] = pi;
    }
    f(i, 30)
    {
        if (psum[i + 1] == 0)
        {
            psum[i + 1] = psum[i];
        }
        else
        {
            psum[i + 1] += psum[i];
        }
    }
    cin >> q;
    f(i, q)
    {
        int dead, req;
        cin >> dead >> req;
        if (psum[dead - 1] < req)
        {
            cout << "Go Sleep" << endl;
        }
        else
        {
            cout << "Go Camp" << endl;
        }
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