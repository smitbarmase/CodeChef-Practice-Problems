#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f(i, n) for (int i = 0; i < n; i++)
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define endl "\n";

void solve()
{
    int n;
    cin >> n;
    string a = "", b = "";
    int a_c = 0, b_c = 0;
    f(i, n)
    {
        string s;
        cin >> s;
        if (s != a && s != b)
        {
            if (a != "")
            {
                b = s;
            }
            else
            {
                a = s;
            }
        }
        if (s == a)
        {
            a_c++;
        }
        else
        {
            b_c++;
        }
    }
    if (a_c == b_c)
    {
        cout << "Draw" << endl;
        return;
    }
    else if (a_c > b_c)
    {
        cout << a << endl;
        return;
    }
    cout << b << endl;
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