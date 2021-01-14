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
    int n, m, sum_a = 0, sum_b = 0, count = 0;
    cin >> n >> m;
    vector<int> a(n), b(m);
    f(i, 0, n)
    {
      cin >> a[i];
      sum_a += a[i];
    }
    f(i, 0, m)
    {
      cin >> b[i];
      sum_b += b[i];
    }

    if (sum_a > sum_b)
    {
      cout << 0 << endl;
      continue;
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i = 0;
    int j = m - 1;
    while (sum_b >= sum_a && i < n && m >= 0)
    {
      int diff = b[j] - a[i];
      if (diff <= 0)
        break;
      sum_a += diff;
      sum_b -= diff;
      i++;
      j--;
      count++;
    }
    cout << (sum_a <= sum_b ? -1 : count) << endl;
  }
  return 0;
}