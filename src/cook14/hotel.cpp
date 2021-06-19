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

struct interval
{
    int a;
    int d;
};

interval it[100];

bool cmp(interval a, interval b)
{
    return a.a < b.a;
}

struct CompareInterval
{
    bool operator()(interval const &p1, interval const &p2)
    {
        return p1.d > p2.d;
    }
};

void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> it[i].a;
    for (int i = 0; i < n; i++)
        cin >> it[i].d;
    sort(it, it + n, cmp);
    priority_queue<interval, vector<interval>, CompareInterval> pq;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        while (!pq.empty() && pq.top().d <= it[i].a)
        {
            pq.pop();
        }
        pq.push(it[i]);
        res = max(res, (long long)pq.size());
    }
    cout << res << endl;
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