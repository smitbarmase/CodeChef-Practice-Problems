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
    int n, k;
    cin >> n >> k;
    int height[n + 1];
    int suffix[n + 1];
    int dp[n + 1][k + 1];

    for (int i = 0; i < n; i++)
      cin >> height[i];
    sort(height, height + n);
    suffix[n] = 0;
    for (int i = n - 1; i >= 0; i--)
      suffix[i] = suffix[i + 1] + height[i];
    for (int i = 0; i <= n; i++)
      for (int j = 0; j <= k; j++)
        dp[i][j] = MAX;
    dp[n][0] = 0;
    for (int i = n - 1; i >= 0; i--)
    {
      for (int j = k; j >= 0; j--)
      {
        if (j < height[i])
        {
          dp[i][j] = height[i];
          continue;
        }
        if (dp[i + 1][j - height[i]] == MAX)
          dp[i][j] = MAX;
        else
          dp[i][j] = min(dp[i + 1][j], dp[i + 1][j - height[i]] + height[i]);
      }
    }
    int flag = 0;
    for (int i = n - 1; i >= 0; i--)
    {
      if (suffix[i] - dp[i][k] >= k)
      {
        cout << n - i << endl;
        flag = 1;
        break;
      }
    }
    if (flag == 1)
      continue;
    cout << -1 << endl;
  }
  return 0;
}