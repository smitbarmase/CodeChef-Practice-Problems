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

// a - h => x (0, 7)
// 1 - 8 => y (0, 7)

void solve()
{
    string s;
    getline(cin, s);
    if (s.size() != 5 || s[2] != '-')
    {
        cout << "Error" << endl;
        return;
    }
    if (s[0] < 'a' || s[0] > 'h' || s[3] < 'a' || s[3] > 'h')
    {
        cout << "Error" << endl;
        return;
    }
    if (s[1] < '1' || s[1] > '8' || s[4] < '1' || s[4] > '8')
    {
        cout << "Error" << endl;
        return;
    }
    int x1 = s[0] - 'a';
    int y1 = s[1] - '0' - 1;
    int x2 = s[3] - 'a';
    int y2 = s[4] - '0' - 1;
    // correctness
    if (abs(x2 - x1) * abs(y2 - y1) == 2)
    {
        cout << "Yes" << endl;
        return;
    }
    cout << "No" << endl;
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
    cin.ignore();
    while (t--)
    {
        solve();
    }
    return 0;
}