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
    int n, k, d, sum = 0;
    cin >> n >> k >> d;
    int a[n];
    f(i, 0, n)
    {
      cin >> a[i];
      sum += a[i];
    }
    if (sum < k)
    {
      cout << 0 << endl;
      continue;
    }
    int days = sum / k;
    cout << min(days, d) << endl;
  }
  return 0;
}