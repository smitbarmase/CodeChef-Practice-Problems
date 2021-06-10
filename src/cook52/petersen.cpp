#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f(i, n) for (int i = 0; i < n; i++)
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define endl "\n";

set<int> st[10];

void pre()
{
    st[0].insert(4);
    st[0].insert(5);
    st[0].insert(1);
    st[1].insert(0);
    st[1].insert(6);
    st[1].insert(2);
    st[2].insert(1);
    st[2].insert(7);
    st[2].insert(3);
    st[3].insert(2);
    st[3].insert(8);
    st[3].insert(4);
    st[4].insert(0);
    st[4].insert(9);
    st[4].insert(3);
    st[0 + 5].insert(0);
    st[0 + 5].insert(7);
    st[0 + 5].insert(8);
    st[1 + 5].insert(9);
    st[1 + 5].insert(8);
    st[1 + 5].insert(1);
    st[2 + 5].insert(9);
    st[2 + 5].insert(5);
    st[2 + 5].insert(2);
    st[3 + 5].insert(5);
    st[3 + 5].insert(6);
    st[3 + 5].insert(3);
    st[4 + 5].insert(4);
    st[4 + 5].insert(6);
    st[4 + 5].insert(7);
}

void solve()
{
    string s;
    cin >> s;
    string res = "-1";
    for (int j = 0; j < 2; j++)
    {
        string temp;
        int curr = s[0] - 'A';
        if (j == 1)
            curr += 5;
        for (int i = 0; i < s.size() - 1; i++)
        {
            int next = s[i + 1] - 'A';
            bool first = st[curr].find(next) != st[curr].end();
            bool second = st[curr].find(next + 5) != st[curr].end();
            if (!first && !second)
            {
                break;
            }
            temp += to_string(curr);
            if (first)
            {
                curr = next;
                continue;
            }
            curr = next + 5;
        }
        temp += to_string(curr);
        if (temp.size() == s.size() && (res == "-1" || res > temp))
        {
            res = temp;
        }
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
    pre();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}