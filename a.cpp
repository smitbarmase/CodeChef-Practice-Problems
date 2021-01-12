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
    int a, b, c;
    cin >> a >> b >> c;

    int count = 0, min = 100000001;

    if (min > a)
      min = a;
    if (min > b)
      min = b;
    if (min > c)
      min = c;

    if (a > min)
    {
      int diff = a - min;
      count += diff;
      a -= diff;
    }

    if (b > min)
    {
      int diff = b - min;
      count += diff;
      b -= diff;
    }

    if (c > min)
    {
      int diff = c - min;
      count += diff;
      c -= diff;
    }

    if ((count + 1) % 7 == 0)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}