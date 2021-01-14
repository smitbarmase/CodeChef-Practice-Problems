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

void solve()
{
  int d1, v1, d2, v2, p;
  cin >> d1 >> v1 >> d2 >> v2 >> p;
  if (d2 > d1)
  {
    cout << ceil(float(d2 - d1) / v1) + ceil(float(p - (d2 - d1)) / (v1 + v2)) << endl;
  }
  else if (d1 > d2)
  {
    cout << ceil(float(d1 - d2) / v2) + ceil(float(p - (d1 - d2)) / (v1 + v2)) << endl;
  }
  else
  {
    cout << ceil(float(p) / (v1 + v2)) << endl;
  }
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}