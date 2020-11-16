#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define cyes cout << "YES" << endl
#define cno cout << "NO" << endl
#define f(i, a, n) for (int i = a; i < n; i++)
#define pb(a) push_back(a)
#define mp(a, b) make_pair(a, b)
#define mod 1000000007
int gcd(int a, int b)
{
  if (!b)
    return a;
  return gcd(b, a % b);
}
int lcm(int a, int b) { return (a * b) / gcd(a, b); }
using namespace std;

struct dish
{
  int x, y;
};

struct clan
{
  int p, q, r;
};

vector<dish> dishes;
vector<clan> clans;

bool check(int num)
{
  auto c = clans.begin();
  for (auto d : dishes)
  {
    while (c < clans.end() && c->p < d.x)
    {
      if (c->q <= num)
        num += c->r;
      c++;
    }

    num -= d.y;
    if (num <= 0)
      return false;
  }
  return true;
}

int binary_search(int l, int r)
{
  if (l > r)
  {
    return l;
  }
  int mid = l + (r - l) / 2;
  int w = check(mid);
  if (w && !check(mid - 1))
  {
    return mid;
  }
  else
  {
    if (w)
    {
      return binary_search(l, mid - 1);
    }
    else
    {
      return binary_search(mid + 1, r);
    }
  }
}

int32_t
main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  while (t--)
  {
    int x, b;
    cin >> x >> b;
    dishes.clear();
    dishes.resize(b);
    for (auto &d : dishes)
    {
      cin >> d.x >> d.y;
    }
    int c;
    cin >> c;
    clans.clear();
    clans.resize(c);
    for (auto &cl : clans)
    {
      cin >> cl.p >> cl.q >> cl.r;
    }
    int max = 0;
    for (auto d : dishes)
      max += d.y;
    int res = binary_search(1, max + 1);
    cout << res << endl;
  }

  return 0;
}