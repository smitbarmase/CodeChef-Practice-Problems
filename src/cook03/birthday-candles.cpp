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

// https://www.codechef.com/COOK03/problems/CANDLE

void solve()
{
    int arr[10];

    int min = 9, num = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
        if (i > 0 && arr[i] < min)
        {
            min = arr[i];
            num = i;
        }
    }

    if (arr[0] < min)
    {
        cout << 1;
        for (int i = 0; i < arr[0] + 1; i++)
        {
            cout << 0;
        }
    }
    else
    {
        for (int i = 0; i < min + 1; i++)
        {
            cout << num;
        }
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