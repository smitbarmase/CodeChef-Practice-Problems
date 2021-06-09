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

int s[51];
int res[4][51];

void solve()
{
    string str;
    cin >> str;
    int l = str.size();
    for (int i = 0; i < l; i++)
    {
        s[i] = str[i] - '0';
    }
    int ans = -1;
    for (int i = 0; i < 4; i++)
    {
        res[i][0] = i & 1;
        res[i][1] = i >> 1;
        for (int j = 1; j < l - 1; j++)
        {
            res[i][j + 1] = res[i][j - 1] ^ res[i][j] ^ s[j];
        }
        if (res[i][0] ^ res[i][l - 1] ^ s[0] == res[i][1] && res[i][l - 2] ^ res[i][l - 1] ^ s[l - 1] == res[i][0])
        {
            if (ans != -1)
            {
                ans = -2;
                break;
            }
            ans = i;
        }
    }
    if (ans == -1)
    {
        cout << "No solution" << endl;
        return;
    }
    if (ans == -2)
    {
        cout << "Multiple solutions" << endl;
        return;
    }
    for (int i = 0; i < l; i++)
    {
        cout << res[ans][i];
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