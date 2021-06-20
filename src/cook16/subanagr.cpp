#include <bits/stdc++.h>
using namespace std;

#define int long long
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

int a[26][100];

void solve()
{
    int n;
    cin >> n;
    memset(a, 0, sizeof a);
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < s.size(); j++)
        {
            a[s[j] - 'a'][i] += 1;
        }
    }
    bool not_found = true;
    for (int i = 0; i < 26; i++)
    {
        int min_count = 101;
        for (int j = 0; j < n; j++)
        {
            min_count = min(min_count, a[i][j]);
        }
        if (min_count > 0)
        {
            not_found = false;
        }
        while (min_count--)
        {
            cout << (char)('a' + i);
        }
    }
    if (not_found)
    {
        cout << "no such string";
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

    solve();
    return 0;
}