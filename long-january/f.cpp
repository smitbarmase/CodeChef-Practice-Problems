#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define cyes cout << "YES" << endl
#define cno cout << "NO" << endl
#define f(i, a, n) for (int i = a; i < n; i++)
#define pb(a) push_back(a)
#define mp(a, b) make_pair(a, b)
#define mod 1000000007
const long long MAX = 1e9;
using namespace std;
int gcd(int a, int b)
{
  if (!b)
    return a;
  return gcd(b, a % b);
}
int lcm(int a, int b) { return (a * b) / gcd(a, b); }

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<vector<int>> lines(n);
    map<int, int> mp;
    f(i, 0, n)
    {
      int m;
      cin >> m;
      f(j, 0, m)
      {
        int ant;
        cin >> ant;
        lines[i].pb(ant);
        mp[abs(ant)]++;
      }
    }
    int res = 0;

    for (auto ant : mp)
      res += (ant.second > 1);

    for (auto line : lines)
    {
      vector<int> pos, neg;
      for (auto ant : line)
      {
        if (ant >= 0)
          pos.push_back(ant);
        else
          neg.push_back(ant);
      }

      reverse(pos.begin(), pos.end());

      while (true)
      {
        int closest;
        if (neg.empty() and pos.empty())
        {
          break;
        }
        else if (neg.empty())
        {
          closest = pos.back();
        }
        else if (pos.empty())
        {
          closest = neg.back();
        }
        else
        {
          closest = (pos.back() > abs(neg.back())) ? neg.back() : pos.back();
        }

        if (closest < 0)
        {
          if (mp[abs(closest)] > 1)
          {
            res += neg.size() - 1;
          }
          else
          {
            res += pos.size();
          }
        }
        else
        {
          if (mp[abs(closest)] > 1)
          {
            res += pos.size() - 1;
          }
          else
          {
            res += neg.size();
          }
        }

        if (closest < 0)
        {
          neg.pop_back();
        }
        else
        {
          pos.pop_back();
        }
      }
    }

    cout << res << endl;
  }
  return 0;
}