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

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--)
  {
    int n, k, a, b;
    cin >> n >> k >> a >> b;
    int c = b - a;
    k %= 4;
    if (c > 0)
    {
      if (k == 1)
        cout << n - c << " " << n << endl;
      else if (k == 2)
        cout << n << " " << n - c << endl;
      else if (k == 3)
        cout << c << " " << 0 << endl;
      else
        cout << 0 << " " << c << endl;
    }
    else if (c < 0)
    {
      if (k == 2)
        cout << n + c << " " << n << endl;
      else if (k == 1)
        cout << n << " " << n + c << endl;
      else if (k == 0)
        cout << -c << " " << 0 << endl;
      else
        cout << 0 << " " << -c << endl;
    }
    else
    {
      cout << n << " " << n << endl;
    }
  }
  return 0;
}