#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f(i, n) for (int i = 0; i < n; i++)
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define endl "\n";

bitset<2 ^ 15> visited;

class Graph
{
    int N;
    int size;
    vector<list<int>> l;
    string res;

public:
    Graph(int n)
    {
        N = n;
        size = 1 << N;
        l.resize(size);
    }
    void add_edge(int a, int b)
    {
        l[a].push_back(b);
        l[b].push_back(a);
    }
    void delete_edge(int a, int b)
    {
        l[a].remove(b);
        l[b].remove(a);
    }
    void make_graph(int num)
    {
        for (int i = 0; i < N; i++)
        {
            int x = num | (1 << i);
            if (x != num)
            {
                add_edge(num, x);
                make_graph(x);
            }
        }
    }
    bool dfs_helper(int num)
    {
        cout << num << endl;
        res += to_string(num) + " ";
        visited[num] = 1;
        if (l[num].size() == 1)
        {
            return false;
        }
        for (auto node : l[num])
        {
            if (!visited[num])
            {
                bool temp = dfs_helper(node);
                if (!temp)
                {
                    return false;
                }
            }
        }
        return true;
    }
    void traverse()
    {
        for (int i = 0; i < size; i++)
        {
            visited.set(i, false);
        }
        bool path = dfs_helper(0);
        if (path)
        {
            cout << res << endl;
            return;
        }
        cout << -1 << endl;
    }
};

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    Graph g(n);
    g.make_graph(0);
    g.delete_edge(a, b);
    g.traverse();
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