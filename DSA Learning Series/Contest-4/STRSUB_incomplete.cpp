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
    int n, k, q;
    cin >> n >> k >> q;
    string s;
    cin >> s;
    int l[q], r[q];
    f(i, 0, q) cin >> l[i] >> r[i];
    int end[n];

    int count0 = 0, count1 = 0;
    int j = 0;
    f(i, 0, n)
    {
      while (j < n and count0 <= k and count1 <= k)
      {
        if (s[j] == 1)
        {
          count1++;
        }
        else
        {
          count0++;
        }
        j++;
      }
      end[i] = j;
      if (s[i] == 1)
      {
        count1--;
      }
      else
      {
        count0--;
      }
    }

    f(a, 0, q)
    {
      int ans;
      for (int i = l[a]; i <= r[a]; i++)
        ans += min(end[i], l[a]) - i + 1;
      cout << ans;
    }
  }
  return 0;
}